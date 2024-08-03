#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

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

    void viewAllTickets(vector<Ticket>& tickets) {
        for (auto& ticket : tickets) {
            ticket.displayTicket();
            cout << "---------------------" << endl;
        }
    }
};

class User : public Person {
public:
    User(string name, int age) : Person(name, age) {}

    void bookTicket(vector<Ticket>& tickets, int& nextPnr) {
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

        tickets.push_back(t);
    }

    void viewTrainDetails(vector<Train>& trains) {
        for (auto& train : trains) {
            train.displayTrainDetails();
            cout << "---------------------" << endl;
        }
    }
};

// Function prototypes
void saveTrainsToFile(const vector<Train>& trains, const string& filename);
void loadTrainsFromFile(vector<Train>& trains, const string& filename);
void saveTicketsToFile(const vector<Ticket>& tickets, const string& filename);
void loadTicketsFromFile(vector<Ticket>& tickets, const string& filename);

int main() {
    vector<Train> trains;
    vector<Ticket> tickets;
    int nextPnr = 1;

    loadTrainsFromFile(trains, "trains.dat");
    loadTicketsFromFile(tickets, "tickets.dat");

    Admin admin("Admin", 40);
    User user("User", 30);

    int choice;
    while (true) {
        cout << "1. Admin Mode\n2. User Mode\n3. Exit\nChoose mode: ";
        cin >> choice;

        if (choice == 1) {
            cout << "1. Add Train\n2. View All Trains\n3. View All Tickets\n4. Logout\nChoose action: ";
            cin >> choice;
            if (choice == 1) {
                admin.addTrain(trains);
                saveTrainsToFile(trains, "trains.dat");
            } else if (choice == 2) {
                admin.viewAllTrains(trains);
            } else if (choice == 3) {
                admin.viewAllTickets(tickets);
            } else {
                continue;
            }
        } else if (choice == 2) {
            cout << "1. Book Ticket\n2. View Train Details\n3. Logout\nChoose action: ";
            cin >> choice;
            if (choice == 1) {
                user.bookTicket(tickets, nextPnr);
                saveTicketsToFile(tickets, "tickets.dat");
            } else if (choice == 2) {
                user.viewTrainDetails(trains);
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
    ofstream file(filename, ios::binary);
    if (file.is_open()) {
        for (const auto& train : trains) {
            file.write(reinterpret_cast<const char*>(&train), sizeof(train));
        }
        file.close();
    }
}

void loadTrainsFromFile(vector<Train>& trains, const string& filename) {
    ifstream file(filename, ios::binary);
    if (file.is_open()) {
        Train train;
        while (file.read(reinterpret_cast<char*>(&train), sizeof(train))) {
            trains.push_back(train);
        }
        file.close();
    }
}

void saveTicketsToFile(const vector<Ticket>& tickets, const string& filename) {
    ofstream file(filename, ios::binary);
    if (file.is_open()) {
        for (const auto& ticket : tickets) {
            file.write(reinterpret_cast<const char*>(&ticket), sizeof(ticket));
        }
        file.close();
    }
}

void loadTicketsFromFile(vector<Ticket>& tickets, const string& filename) {
    ifstream file(filename, ios::binary);
    if (file.is_open()) {
        Ticket ticket(0);
        while (file.read(reinterpret_cast<char*>(&ticket), sizeof(ticket))) {
            tickets.push_back(ticket);
        }
        file.close();
    }
}
