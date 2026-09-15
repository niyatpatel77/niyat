#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of odd terms to print: ";
    cin >> n;
    
    cout << "The first " << n << " odd numbers are: \n";
    
    // The nth odd number is always (2 * n) - 1
    for (int i = 1; i <= (2 * n - 1); i += 2) {
        cout << i << " ";
    }
    
    cout << endl;
    return 0;
}

