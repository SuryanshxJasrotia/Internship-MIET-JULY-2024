#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to check if a character is a vowel
bool is_vowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

// Function to generate a random password
string generate_password(int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charset_size = sizeof(charset) - 1;
    string password;
    for (int i = 0; i < length; ++i) {
        password += charset[rand() % charset_size];
    }
    return password;
}

int main() {
    srand(time(0)); // Seed for random number generation

    // File handling variables
    ifstream input_file("example.txt");
    ofstream output_file("example.txt", ios::app);
    ofstream credentials_file("credentials.txt");

    // Check if files open successfully
    if (!input_file) {
        cout << "Error: Unable to open the file for reading." << endl;
        return 1;
    }
    if (!output_file) {
        cout << "Error: Unable to open the file for appending." << endl;
        return 1;
    }
    if (!credentials_file) {
        cout << "Error: Unable to open the credentials file for writing." << endl;
        return 1;
    }

    // Variables to calculate sum and average
    string line;
    int sum = 0, count = 0;
    int marks;

    // Additional variables for new tasks
    int vowel_count = 0, consonant_count = 0;
    map<string, int> word_count;
    map<char, int> char_count;

    // Prompt the user for a username and password
    string username, password;
    cout << "Enter a username: ";
    cin >> username;
    cout << "Enter a password: ";
    cin >> password;

    // Store the provided username and password in the credentials file
    credentials_file << "Username: " << username << ", Password: " << password << endl;

    // Also append the provided username and password to the output file (example.txt)
    output_file << "Username: " << username << ", Password: " << password << endl;

    // Read existing contents to calculate sum and average
    while (getline(input_file, line)) {
        stringstream ss(line);
        string name;
        ss >> name >> marks;
        if (ss) {
            sum += marks;
            count++;
        }

        // Count vowels and consonants
        for (char ch : line) {
            if (isalpha(ch)) {
                if (is_vowel(ch)) {
                    vowel_count++;
                } else {
                    consonant_count++;
                }
                char_count[tolower(ch)]++;
            }
        }

        // Count words
        string word;
        while (ss >> word) {
            word_count[word]++;
        }
    }
    input_file.close(); // Close the input file after reading

    // Calculate average
    double average = count == 0 ? 0 : static_cast<double>(sum) / count;

    // Append results to the file
    output_file << "Sum of marks: " << sum << endl;
    output_file << "Average of marks: " << average << endl;

    // Display vowels and consonants count
    output_file << "Number of vowels: " << vowel_count << endl;
    output_file << "Number of consonants: " << consonant_count << endl;

    // Display word counts
    output_file << "Word counts:" << endl;
    for (const auto& pair : word_count) {
        output_file << pair.first << ": " << pair.second << endl;
    }

    // Display duplicate characters and their counts
    output_file << "Duplicate characters and their counts:" << endl;
    for (const auto& pair : char_count) {
        if (pair.second > 1) {
            output_file << pair.first << ": " << pair.second << endl;
        }
    }

    // Close the output and credentials files
    output_file.close();
    credentials_file.close();

    // Display results to the console as well
    cout << "Sum of marks: " << sum << endl;
    cout << "Average of marks: " << average << endl;
    cout << "Number of vowels: " << vowel_count << endl;
    cout << "Number of consonants: " << consonant_count << endl;

    cout << "Word counts:" << endl;
    for (const auto& pair : word_count) {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "Duplicate characters and their counts:" << endl;
    for (const auto& pair : char_count) {
        if (pair.second > 1) {
            cout << pair.first << ": " << pair.second << endl;
        }
    }

    // Prompt the user if they want to delete the data
    char delete_choice;
    cout << "Do you wish to delete data from the file? (y/n): ";
    cin >> delete_choice;

    if (delete_choice == 'y' || delete_choice == 'Y') {
        // Clear the contents of the file
        ofstream output_file("example.txt", ios::trunc);
        if (!output_file) {
            cout << "Error: Unable to clear the file." << endl;
            return 1;
        }
        cout << "Data cleared from the file." << endl;
        output_file.close();
    } else if (delete_choice == 'n' || delete_choice == 'N') {
        cout << "Exiting without deleting data." << endl;
    } else {
        cout << "Invalid input. Exiting." << endl;
        return 1;
    }
    return 0;
}