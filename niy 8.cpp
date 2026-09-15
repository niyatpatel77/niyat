#include <iostream>

int main() {
    long long n; // Using long long to prevent integer overflow for large numbers
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    long long sum = n * n;

    std::cout << "The sum of the first " << n << " odd numbers is: " << sum << std::endl;
    return 0;
}

