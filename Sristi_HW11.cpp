/*#include <iostream>
#include <cctype> 
#include <string>

using namespace std;

bool changeUpper(string& str, int index) {
    if (index < 0 || index >= str.length()) {
        cout << "Invalid index." << endl;
        return false;
    }

    if (isupper(str[index])) {
        str[index] = tolower(str[index]);
        return true;
    } else {
        return false;
    }
}

int main() {
    string myString = "Hello World";
    int indexToCheck = 4;

    cout << "Original string: " << myString << endl;

    if (changeUpper(myString, indexToCheck)) {
        cout << "Character at index " << indexToCheck << " changed to lowercase." << endl;
    } else {
        cout << "Character at index " << indexToCheck << " is not uppercase." << endl;
    }

    cout << "Modified string: " << myString << endl;

    return 0;
}
*/