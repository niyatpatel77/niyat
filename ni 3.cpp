#include <stdio.h>

int main() {
    float gross_salary, allowances, deductions, net_salary;

    // Input gross salary from user
    printf("Enter Gross Salary: ");
    scanf("%f", &gross_salary);

    // Calculate allowances and deductions based on salary conditions
    if (gross_salary >= 10000) {
        allowances = 0.10 * gross_salary; // 10%
        deductions = 0.03 * gross_salary; // 3%
    } 
    else if (gross_salary > 5000) {
        allowances = 0.07 * gross_salary; // 7%
        deductions = 0.02 * gross_salary; // 2%
    } 
    else {
        allowances = 0.0;
        deductions = 0.0;
    }

    // Formula: net salary = gross salary + allowances - deductions
    net_salary = gross_salary + allowances - deductions;

    // Output final results
    printf("\n--- Salary Details ---\n");
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Allowances  : %.2f\n", allowances);
    printf("Deductions  : %.2f\n", deductions);
    printf("Net Salary  : %.2f\n", net_salary);

    return 0;
}
