#include <stdio.h>

int main() {
    int number;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check divisibility using the modulo operator
    if (number % 7 == 0) {
        printf("%d is divisible by 7.\n", number);
    } else {
        printf("%d is not divisible by 7.\n", number);
    }

    return 0;
}
