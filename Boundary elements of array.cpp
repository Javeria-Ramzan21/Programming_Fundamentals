#include <iostream>

using namespace std;




void BoundaryElements(int** matrix, int rows, int cols) {

    for (int i = 0; i < cols; i++) {
        cout << matrix[0][i] << " ";
    }
    cout << endl;


    for (int i = 1; i < rows; i++) {
        cout << matrix[i][cols - 1] << " ";
    }
    cout << endl;


    for (int i = cols - 2; i >= 0; i--) {
        cout << matrix[rows - 1][i] << " ";
    }
    cout << endl;


    for (int i = rows - 2; i > 0; i--) {
        cout << matrix[i][0] << " ";
    }
    cout << endl;
}


int** locateMatrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    return matrix;
}


void delocateMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int** matrix = locateMatrix(rows, cols);

    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Boundary elements of the matrix: " << endl;
    BoundaryElements(matrix, rows, cols);

    delocateMatrix(matrix, rows);

    return 0;
}


