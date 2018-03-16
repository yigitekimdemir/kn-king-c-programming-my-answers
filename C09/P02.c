#include <stdio.h>

float TaxCalculation(int); //declaration

int main(void)
{
    float income;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    printf("Tax due is: $%.2f", TaxCalculation(income));

    return 0;
}

float TaxCalculation(int n) //definition
{
    if (n < 750.00f)
        return n /100;
    else if (n >= 750.00f && n < 2250.00f)
        return 7.50f + (n - 750.00)*2/100;
    else if (n >= 2250.00f && n < 3750.00f)
        return 37.50f + (n - 2250.00)*3/100;
    else if (n >= 3750.00f && n < 5250.00f)
        return 82.50f + (n - 3750.00)*4/100;
    else if (n >= 5250.00f && n < 7000.00f)
        return 142.50f + (n - 5250.00)*5/100;
    else if (n >= 7000.00f)
        return 230.00f + (n - 7000.00)*6/100;
}
