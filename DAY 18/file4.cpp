#include <iostream>
#include <fstream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// Function to generate a random alphanumeric string
string generateRandomString(int length) {
    const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string result;
    for (int i = 0; i < length; ++i) {
        result += charset[rand() % charset.length()];
    }
    return result;
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    // Get username and password from the user
    string username, password;
    cout << "Enter a username: ";
    cin >> username;
    cout << "Enter a password: ";
    cin >> password;

    // Generate random username and password
    string randomUsername = generateRandomString(8); // You can adjust the length as needed
    string randomPassword = generateRandomString(12); // You can adjust the length as needed

    // Create and open a file for writing
    ofstream outFile("credentials.txt");
    if (!outFile) {
        cerr << "Error creating file." << endl;
        return 1;
    }

    // Write the generated credentials to the file
    outFile << "Generated Username: " << randomUsername << endl;
    outFile << "Generated Password: " << randomPassword << endl;
    outFile << "User-Provided Username: " << username << endl;
    outFile << "User-Provided Password: " << password << endl;

    // Close the file
    outFile.close();

    cout << "Credentials saved to credentials.txt." << endl;

    return 0;
}
