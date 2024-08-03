#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>

using namespace std;

// Base class for common properties
class Person {
public:
    string name;
    int age;

    Person(string name, int age) : name(name), age(age) {}
};

class Train {
public:
    int trainNumber;
    string name;
    string timing;
    string route;
    float fare;

    Train() {}
    Train(int tn, string nm, string tm, string rt, float fr)
        : trainNumber(tn), name(nm), timing(tm), route(rt), fare(fr) {}

    void displayTrainDetails() {
        cout << "Train Number: " << trainNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Timing: " << timing << endl;
        cout << "Route: " << route << endl;
        cout << "Fare: " << fare << endl;
    }
};

class Ticket {
public:
    int pnr;
    vector<Person> passengers;
    float totalFare;

    Ticket(int pnr) : pnr(pnr), totalFare(0) {}

    void addPassenger(Person p) {
        passengers.push_back(p);
        totalFare += p.age > 12 ? 100 : 50; // Example fare logic
    }

    void displayTicket() {
        cout << "PNR: " << pnr << endl;
        cout << "Total Fare: " << totalFare << endl;
        cout << "Passengers:" << endl;
        for (auto& p : passengers) {
            cout << "  " << p.name << " (Age: " << p.age << ")" << endl;
        }
    }
};

class Admin : public Person {
public:
    Admin(string name, int age) : Person(name, age) {}

    void addTrain(vector<Train>& trains) {
        int tn;
        string nm, tm, rt;
        float fr;
        cout << "Enter train number: ";
        cin >> tn;
        cout << "Enter train name: ";
        cin.ignore();
        getline(cin, nm);
        cout << "Enter timing: ";
        getline(cin, tm);
        cout << "Enter route: ";
        getline(cin, rt);
        cout << "Enter fare: ";
        cin >> fr;

        trains.push_back(Train(tn, nm, tm, rt, fr));
    }

    void viewAllTrains(vector<Train>& trains) {
        for (auto& train : trains) {
            train.displayTrainDetails();
            cout << "---------------------" << endl;
        }
    }

    void viewAllTickets(unordered_map<string, vector<Ticket>>& userTickets) {
        for (auto& pair : userTickets) {
            cout << "User: " << pair.first << endl;
            for (auto& ticket : pair.second) {
                ticket.displayTicket();
                cout << "---------------------" << endl;
            }
        }
    }

    void cancelTicket(unordered_map<string, vector<Ticket>>& userTickets) {
        int pnr;
        cout << "Enter PNR to cancel: ";
        cin >> pnr;

        for (auto& pair : userTickets) {
            auto& tickets = pair.second;
            for (auto it = tickets.begin(); it != tickets.end(); ++it) {
                if (it->pnr == pnr) {
                    tickets.erase(it);
                    cout << "Ticket with PNR " << pnr << " has been canceled." << endl;
                    return;
                }
            }
        }
        cout << "Ticket with PNR " << pnr << " not found." << endl;
    }
};

class User : public Person {
public:
    string userID;
    User(string name, int age, string userID) : Person(name, age), userID(userID) {}

    void bookTicket(unordered_map<string, vector<Ticket>>& userTickets, int& nextPnr) {
        Ticket t(nextPnr++);
        int passengerCount;
        cout << "Enter number of passengers: ";
        cin >> passengerCount;

        for (int i = 0; i < passengerCount; ++i) {
            string pname;
            int page;
            cout << "Enter name of passenger " << i + 1 << ": ";
            cin.ignore();
            getline(cin, pname);
            cout << "Enter age of passenger " << i + 1 << ": ";
            cin >> page;

            t.addPassenger(Person(pname, page));
        }

        userTickets[userID].push_back(t);
    }

    void viewTrainDetails(vector<Train>& trains) {
        for (auto& train : trains) {
            train.displayTrainDetails();
            cout << "---------------------" << endl;
        }
    }

    void viewUserTickets(unordered_map<string, vector<Ticket>>& userTickets) {
        if (userTickets.find(userID) != userTickets.end()) {
            for (auto& ticket : userTickets[userID]) {
                ticket.displayTicket();
                cout << "---------------------" << endl;
            }
        } else {
            cout << "No tickets found for user." << endl;
        }
    }

    void cancelUserTicket(unordered_map<string, vector<Ticket>>& userTickets) {
        int pnr;
        cout << "Enter PNR to cancel: ";
        cin >> pnr;

        auto& tickets = userTickets[userID];
        for (auto it = tickets.begin(); it != tickets.end(); ++it) {
            if (it->pnr == pnr) {
                tickets.erase(it);
                cout << "Ticket with PNR " << pnr << " has been canceled." << endl;
                return;
            }
        }
        cout << "Ticket with PNR " << pnr << " not found." << endl;
    }
};

// Function prototypes
void saveTrainsToFile(const vector<Train>& trains, const string& filename);
void loadTrainsFromFile(vector<Train>& trains, const string& filename);
void saveTicketsToFile(const unordered_map<string, vector<Ticket>>& userTickets, const string& filename);
void loadTicketsFromFile(unordered_map<string, vector<Ticket>>& userTickets, const string& filename);

int main() {
    vector<Train> trains;
    unordered_map<string, vector<Ticket>> userTickets;
    int nextPnr = 1;

    loadTrainsFromFile(trains, "trains.txt");
    loadTicketsFromFile(userTickets, "tickets.txt");

    Admin admin("Admin", 40);

    int choice;
    const string adminPassword = "1234";

    while (true) {
        cout << "1. Admin Mode\n2. User Mode\n3. Exit\nChoose mode: ";
        cin >> choice;

        if (choice == 1) {
            string inputPassword;
            cout << "Enter admin password: ";
            cin >> inputPassword;

            if (inputPassword == adminPassword) {
                cout << "1. Add Train\n2. View All Trains\n3. View All Tickets\n4. Cancel Booking\n5. Logout\nChoose action: ";
                cin >> choice;
                if (choice == 1) {
                    admin.addTrain(trains);
                    saveTrainsToFile(trains, "trains.txt");
                } else if (choice == 2) {
                    admin.viewAllTrains(trains);
                } else if (choice == 3) {
                    admin.viewAllTickets(userTickets);
                } else if (choice == 4) {
                    admin.cancelTicket(userTickets);
                    saveTicketsToFile(userTickets, "tickets.txt");
                } else {
                    continue;
                }
            } else {
                cout << "Incorrect password. Access denied." << endl;
            }
        } else if (choice == 2) {
            string userID;
            cout << "Enter User ID: ";
            cin >> userID;

            User user("User", 30, userID);

            cout << "1. Book Ticket\n2. View Train Details\n3. View My Tickets\n4. Cancel My Ticket\n5. Logout\nChoose action: ";
            cin >> choice;
            if (choice == 1) {
                user.bookTicket(userTickets, nextPnr);
                saveTicketsToFile(userTickets, "tickets.txt");
            } else if (choice == 2) {
                user.viewTrainDetails(trains);
            } else if (choice == 3) {
                user.viewUserTickets(userTickets);
            } else if (choice == 4) {
                user.cancelUserTicket(userTickets);
                saveTicketsToFile(userTickets, "tickets.txt");
            } else {
                continue;
            }
        } else {
            break;
        }
    }

    return 0;
}

void saveTrainsToFile(const vector<Train>& trains, const string& filename) {
    ofstream file(filename);
    if (file.is_open()) {
        for (const auto& train : trains) {
            file << train.trainNumber << "," << train.name << "," << train.timing << "," << train.route << "," << train.fare << endl;
        }
        file.close();
    }
}

void loadTrainsFromFile(vector<Train>& trains, const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            istringstream ss(line);
            string token;
            Train train;
            getline(ss, token, ','); train.trainNumber = stoi(token);
            getline(ss, token, ','); train.name = token;
            getline(ss, token, ','); train.timing = token;
            getline(ss, token, ','); train.route = token;
            getline(ss, token, ','); train.fare = stof(token);
            trains.push_back(train);
        }
        file.close();
    }
}

void saveTicketsToFile(const unordered_map<string, vector<Ticket>>& userTickets, const string& filename) {
    ofstream file(filename);
    if (file.is_open()) {
        for (const auto& pair : userTickets) {
            for (const auto& ticket : pair.second) {
                file << pair.first << "," << ticket.pnr << "," << ticket.totalFare;
                for (const auto& passenger : ticket.passengers) {
                    file << "," << passenger.name << "," << passenger.age;
                }
                file << endl;
            }
        }
        file.close();
    }
}

void loadTicketsFromFile(unordered_map<string, vector<Ticket>>& userTickets, const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            istringstream ss(line);
            string userID, token;
            getline(ss, userID, ',');
            getline(ss, token, ','); int pnr = stoi(token);
            Ticket ticket(pnr);
            getline(ss, token, ','); ticket.totalFare = stof(token);
            while (getline(ss, token, ',')) {
                string pname = token;
                getline(ss, token, ','); int page = stoi(token);
                ticket.addPassenger(Person(pname, page));
            }
            userTickets[userID].push_back(ticket);
        }
        file.close();
    }
}
