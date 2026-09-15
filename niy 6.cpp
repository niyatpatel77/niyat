#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of even numbers to print: ";
    cin >> n;

    cout << "The first " << n << " even numbers are: " << endl;
    
    // Loop runs exactly n times, printing the next even number each time
    for (int i = 1; i <= n; i++) {
        cout << 2 * i << " ";
    }
    
    cout << endl;
    return 0;
}

