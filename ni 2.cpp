#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;

    // Prompt user for input
    printf("Enter three integer values: ");
    scanf("%d %d %d", &a, &b, &c);

    // Initialize max and min with the first number
    max = a;
    min = a;

    // Check against the second number
    if (b > max) {
        max = b;
    }
    if (b < min) {
        min = b;
    }

    // Check against the third number
    if (c > max) {
        max = c;
    }
    if (c < min) {
        min = c;
    }

    // Display the results
    printf("Largest value: %d\n", max);
    printf("Smallest value: %d\n", min);

    return 0;
}
