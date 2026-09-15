#include <iostream>

int main() {
    std::cout << "The first 10 odd numbers are:\n";
    
    // Loop 10 times to get exactly 10 odd numbers
    for (int i = 1; i <= 10; i++) {
        // Formula to calculate the i-th odd number
        std::cout << (2 * i - 1) << " ";
    }
    
    std::cout << std::endl;
    return 0;
}
