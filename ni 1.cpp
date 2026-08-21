#include <stdio.h>

int main() {
    int num1, num2;
    int largest, smallest;

    // Prompt user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Compare the numbers
    if (num1 > num2) {
        largest = num1;
        smallest = num2;
    } else {
        largest = num2;
        smallest = num1;
    }

    // Print the results
    printf("Largest value: %d\n", largest);
    printf("Smallest value: %d\n", smallest);

    return 0;
}
