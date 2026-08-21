#include <stdio.h>

int main() {
    float gross_sales, discount, net_sales;

    // Input gross sales
    printf("Enter gross sales: ");
    scanf("%f", &gross_sales);

    // Determine discount percentage based on conditions
    if (gross_sales > 20000) {
        discount = 0.15 * gross_sales;
    } else if (gross_sales > 10000) {
        discount = 0.10 * gross_sales;
    } else {
        discount = 0.05 * gross_sales;
    }

    // Calculate net sales
    net_sales = gross_sales - discount;

    // Output results
    printf("Gross Sales: %.2f\n", gross_sales);
    printf("Discount: %.2f\n", discount);
    printf("Net Sales: %.2f\n", net_sales);

    return 0;
}
