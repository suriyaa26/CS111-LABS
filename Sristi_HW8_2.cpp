/*#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;

    int arr[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    double average[rows];
    for (int r = 0; r < rows; ++r) {
        int rowSum = 0;

        for (int c = 0; c < cols; ++c) {
            rowSum += arr[r][c];
        }
        average[r] = static_cast<double>(rowSum) / cols;
    }
    cout << "Averages for each row:" << endl;
    for (int r = 0; r < rows; ++r) {
        cout << "Row " << r + 1 << ": " << average[r] << endl;
    }

    return 0;
}*/