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
    int maxSum = 0;
    int maxRow = 0;

    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += arr[i][j];
        }

        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }
    cout << "The row with the largest sum is row " << maxRow + 1 << " with a sum of " << maxSum << endl;

    return 0;
}
*/