#include <iostream>
using namespace std;
void readMatrix(int matrix[][100], int m = 3, int n = 3) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}
void displayMatrix(int matrix[][100], int m, int n) {
    cout << "The matrix is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int m, n;
    cout << "Enter the number of columns (n): ";
    cin >> n;
    cout << "Enter the number of rows (m) or press Enter to use the default (3 rows): ";
    if (cin.peek() != '\n') {  
        cin >> m;
    } else {
        m = 3;  
    }
    int matrix[100][100]; 
    readMatrix(matrix, m, n);
    displayMatrix(matrix, m, n);

    return 0;
}
