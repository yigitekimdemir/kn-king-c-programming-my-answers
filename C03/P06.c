/* Adds two fractions */

//this project requires the addfrac.c project code

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, resultNum, resultDenom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2); //getting the scanf to read all fractions at once and assign them to variables

    resultNum = num1 * denom2 + num2 * denom1;

    resultDenom = denom1 * denom2; //make the denominators equal

    printf("The sum is %d/%d\n", resultNum, resultDenom);

    return 0;
}
