include <iostream>

int main() {
    std::cout << "The first 10 even numbers are:\n";
    
    // Loop runs 10 times, multiplying the counter 'i' by 2
    for (int i = 1; i <= 10; ++i) {
        std::cout << i * 2 << " ";
    }
    
    std::cout << std::endl;
    return 0;
}
