/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user*/
#include <stdio.h>
double calculateIncomeTax(double income) {
    double tax = 0.0;
    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (income - 500000) * 0.20 + 250000 * 0.05;
    } else {
        tax = (income - 1000000) * 0.30 + 500000 * 0.20 + 250000 * 0.05;
    }
    return tax;
}
int main() {
    double income, tax, amount_left;
    printf("Enter your income: ");
    scanf("%lf", &income);
    tax = calculateIncomeTax(income);
    printf("The income tax to be paid is: %.2lf\n", tax);
    amount_left=income-tax;
    printf("The amount left after paying taxes: %.2lf\n",amount_left);
    return 0;
}

