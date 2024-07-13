/*#include <iostream>

using namespace std;


bool search2d(int array[][3], int r, int c, int num) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (array[i][j] == num) {
                return true; 
            }
        }
    }
    return false; 
}

int main() {
    const int rows = 3;
    const int columns = 3;

    
    int myArray[rows][columns] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int searchNum;

    cout << "Enter the number to search for: ";
    cin >> searchNum;

    if (search2d(myArray, rows, columns, searchNum)) {
        cout << searchNum << " is present in the array." << endl;
    } else {
        cout << searchNum << " is not present in the array." << endl;
    }

    return 0;
}
*/