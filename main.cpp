#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Matrix size (positive size <= 10): ";
    int size;
    cin >> size;
    while (size <= 0 || size > 10) {
        cout << "Incorrect size. Try again" << endl << "Matrix size (positive size <= 10): ";
        cin >> size;
    }
    vector<vector<int>> matrix(size, vector<int>(size));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
            matrix[j][i] = matrix[i][j];
        }
    }
    cout << endl << "Matrix" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> matrix_without_zeros;

    for (int i = 0; i < size; i++) {
        int counter = 0;
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != 0) {
                matrix_without_zeros.push_back(matrix[i]);
                counter++;
                break;
            }
        }
    }
    size = matrix_without_zeros.size();
    cout << endl << "Matrix without zeros" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix_without_zeros[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
