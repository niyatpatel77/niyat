#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user for the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Validation: Natural numbers start from 1
    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1; 
    }

    cout << "The first " << n << " natural numbers are: " << endl;
    
    // Loop from 1 to n to print the numbers
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    
    cout << endl;
    return 0;
}
