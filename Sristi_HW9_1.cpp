/*#include <iostream>

using namespace std;

void countPrint(int array[], int length) {
    for (int i = 0; i < length; ++i) {
        if (array[i] < 0 || array[i] > 9) {
            cerr << "Error: Array only contains single-digit integers." << endl;
            return;
        }
    }

    int count[10] = {0}; 
    for (int i = 0; i < length; ++i) {
        count[array[i]]++;
    }

    for (int i = 0; i < 10; ++i) {
        if (count[i] > 0) {
            cout << i << " has a count of " << count[i] << endl;
        }
    }
}

int main() {
    int myArray[] = {0, 1, 7, 3, 7, 2, 1, 1, 0, 2};
    int arrayLength = sizeof(myArray) / sizeof(myArray[0]);

    countPrint(myArray, arrayLength);

    return 0;
}
*/