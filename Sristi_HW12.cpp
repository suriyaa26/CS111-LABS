#include <iostream>

using namespace std;

char toLower(char ch) {

    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    } else {
        return ch;
    }
}

bool compareIt(const char* str1, const char* str2) {
    while (*str1 && *str2) {

        if (toLower(*str1) != toLower(*str2)) {
            return false;
        }
        str1++;
        str2++;
    }

    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    const char* string1 = "Hello";
    const char* string2 = "hElLo";

    if (compareIt(string1, string2)) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}
