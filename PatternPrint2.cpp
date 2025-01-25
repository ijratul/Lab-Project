#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int start; // Variable to determine starting value
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // Even rows start with 1
            start = 1;
        } else { // Odd rows start with 0
            start = 0;
        }
        for (int j = 1; j <= i; j++) {
            cout << start;
            start = 1 - start; // Alternate between 0 and 1
        }
        cout << endl;
    }

    return 0;
}


