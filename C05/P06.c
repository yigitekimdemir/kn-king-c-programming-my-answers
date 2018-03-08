/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, firstSum, secondSum, total, checkDigit;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    printf("Enter the last digit: "); //must be asked to compare the check digit with the calculation
    scanf("%1d", &checkDigit);

    firstSum = d + i2 + i4 + j1 + j3 + j5;
    secondSum = i1 + i3 + i5 + j2 + j4;
    total = 3 * firstSum + secondSum;

    if ((9 - ((total - 1) %10)) == checkDigit) //could be shortened with an extra variable if wanted to
        printf("VALID");
    else
        printf("NOT VALID");

    return 0;
}
