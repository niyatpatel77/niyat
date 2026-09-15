#include <iostream>

using namespace std;

int main() {
    int n;

    // Prompt user for input
    cout << "Enter the value of n: ";
    cin >> n;

    // Edge case handling for negative numbers
    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    // Calculate the sum of the first n even numbers using the formula: n * (n + 1)
    // Using long long to prevent integer overflow for large values of n
    long long sum = (long long)n * (n + 1);

    // Print the result
    cout << "The sum of the first " << n << " even numbers is: " << sum << endl;

    return 0;
}

