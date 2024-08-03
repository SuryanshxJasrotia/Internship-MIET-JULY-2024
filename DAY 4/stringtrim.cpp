#include <iostream>
#include <string>

using namespace std;

// Function to calculate and print the length of a string
void printStringLength(const string& text) {
    cout << "Length of the string: " << text.length() << endl;
}

// Function to access and print the first character of a string
void printFirstCharacter(const string& text) {
    cout << "First character: " << text.at(0) << endl;
}

// Function to concatenate two strings and print the result
void concatenateStrings(const string& str1, const string& str2) {
    string result = str1 + str2;
    cout << "Concatenated string: " << result << endl;
}

// Function to extract a substring and print it
void printSubstring(const string& str1) {
    string sub = str1.substr(7, 5);
    cout << "Substring: " << sub << endl;
}

// Function to find and print the position of a substring
void printSubstringPosition(const string& str1) {
    size_t pos = str1.find("world");
    cout << "Position of 'world': " << pos << endl;
}

int main() {
    string str1 = "Hello, ";
    string str2 = "world!";

    printStringLength(str1);
    printFirstCharacter(str1);
    concatenateStrings(str1, str2);
    printSubstring(str1);
    printSubstringPosition(str1);

    return 0;
}



// #include <iostream>
// #include <string>

// using namespace std;

// // Function to demonstrate string operations
// void demonstrateStringFunctions() {
//     // Initialize a sample string
//     string myString = "Hello, World!";

//     // 1. String Length
//     cout << "Length of the string: " << myString.length() << endl;

//     // 2. Accessing Characters
//     char firstChar = myString.at(0);
//     cout << "First character: " << firstChar << endl;

//     // 3. Appending and Concatenating Strings
//     string anotherString = " Welcome!";
//     myString += anotherString;
//     cout << "Concatenated string: " << myString << endl;

//     // 4. String Comparison
//     string compareString = "Hello, Universe!";
//     bool isEqual = (myString == compareString);
//     cout << "Strings are equal: " << isEqual << endl;

//     // 5. Substrings
//     string subString = myString.substr(7, 5);
//     cout << "Substring: " << subString << endl;

//     // 6. Searching
//     size_t foundPos = myString.find("World");
//     cout << "Position of 'World': " << foundPos << endl;

//     // 7. Modifying Strings
//     myString.replace(7, 5, "Everyone");
//     cout << "Modified string: " << myString << endl;

//     // 8. Conversion to C-style string
//     const char* cStyleString = myString.c_str();
//     cout << "C-style string: " << cStyleString << endl;
// }

// int main() {
//     demonstrateStringFunctions();
//     return 0;
// }
