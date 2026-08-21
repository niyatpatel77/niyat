#include <stdio.h>

int main() {
    float sub1, sub2, sub3;
    float total, average;

    // Input marks for three subjects
    printf("Enter marks for Subject 1: ");
    scanf("%f", &sub1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &sub2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &sub3);

    // Calculate total and average
    total = sub1 + sub2 + sub3;
    average = total / 3.0;

    // Print total and average
    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    // Check for individual subject failure first
    if (sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("Grade: Fail (Secured less than 35 in one or more subjects)\n");
    } 
    // Grading logic based on average
    else if (average >= 70) {
        printf("Grade: Distinction\n");
    } 
    else if (average >= 60) {
        printf("Grade: First Class\n");
    } 
    else if (average >= 50) {
        printf("Grade: Second Class\n");
    } 
    else if (average >= 35) {
        printf("Grade: Third Class\n");
    } 
    else {
        printf("Grade: Fail\n");
    }

    return 0;
}
