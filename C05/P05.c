#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    if (income < 750.00f)
        tax = income /100;
    else if (income >= 750.00f && income < 2250.00f)
        tax = 7.50f + (income - 750.00)*2/100;
    else if (income >= 2250.00f && income < 3750.00f)
        tax = 37.50f + (income - 2250.00)*3/100;
    else if (income >= 3750.00f && income < 5250.00f)
        tax = 82.50f + (income - 3750.00)*4/100;
    else if (income >= 5250.00f && income < 7000.00f)
        tax = 142.50f + (income - 5250.00)*5/100;
    else if (income >= 7000.00f)
        tax = 230.00f + (income - 7000.00)*6/100;

    printf("Tax due is: $%.2f", tax);

    return 0;
}
