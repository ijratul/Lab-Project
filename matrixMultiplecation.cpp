#include <iostream>
using namespace std;
void multiplyMatrices(int A[][100], int B[][100], int C[][100], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[][100], int m, int p) {
    cout << "The result of matrix multiplication is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n, p;
    cout << "Enter the number of rows of matrix A (m): ";
    cin >> m;
    cout << "Enter the number of columns of matrix A (n) and rows of matrix B (n): ";
    cin >> n;
    cout << "Enter the number of columns of matrix B (p): ";
    cin >> p;
    int A[100][100], B[100][100], C[100][100];
    cout << "Enter elements of matrix A (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of matrix B (" << n << "x" << p << "):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }
    multiplyMatrices(A, B, C, m, n, p);
    displayMatrix(C, m, p);

    return 0;
}
