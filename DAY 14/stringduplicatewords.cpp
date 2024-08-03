#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {
    string x;
    getline(cin, x);

    stringstream obj(x);
    string temp;
    map<string, int> wordCount;

    while (obj >> temp) {
         wordCount[temp]++;
    }
    for (const auto& entry : wordCount) {
        cout << entry.first << " : " << entry.second << "   ";
    }
    return 0;
}
