#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1; // Used unsigned long long to handle larger results

    cout << "Enter a positive integer: ";
    cin >> n;

    // Factorial does not exist for negative numbers
    if (n < 0) {
        cout << "Error! Factorial of a negative number doesn't exist." << endl;
    } else {
        // Loop to multiply numbers from 1 to n
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}

