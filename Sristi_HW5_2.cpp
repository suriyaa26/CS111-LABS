/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int num1, num2;

    do {
        cout << "Enter two positive integers with a difference of at least 10: ";
        cin >> num1 >> num2;

        if (num1 <= 0 || num2 <= 0 || abs(num1 - num2) < 10) {
            cout << "Invalid input! Try again." << endl;
        }
    } while (num1 <= 0 || num2 <= 0 || abs(num1 - num2) < 10);

    int minNum = min(num1, num2);
    int maxNum = max(num1, num2);

    int randomNum = rand() % (maxNum - minNum + 1) + minNum;

    cout << "Random number between " << minNum << " and " << maxNum << " is " << randomNum << endl;

    return 0;
}*/