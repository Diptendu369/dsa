//2. Create and Manipulate a 2D Array Using Double Pointers

#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 3;
    int** matrix = new int*[rows];

    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];

    cout << "Enter 3x3 matrix values:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
