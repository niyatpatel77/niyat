#include <iostream>
#include <string>

int main() {
    std::string name;
    int n;

    // Take the name as input (handles names with spaces)
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Take the number of repetitions as input
    std::cout << "Enter how many times to print: ";
    std::cin >> n;

    std::cout << "\n--- Printing your name " << n << " times ---\n";
    
    // Loop from 0 to n-1 to print the name n times
    for (int i = 0; i < n; ++i) {
        std::cout << name << "\n";
    }

    return 0;
}
