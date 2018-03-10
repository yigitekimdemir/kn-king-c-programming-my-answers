/* Adds two fractions */

//this project requires the addfrac.c project code
//and also code of C03P06 code.

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, resultNum, resultDenom;
    char ch;

    printf("Enter two fractions separated by an add, subtract, multiply or divide sign: ");

    scanf("%d/%d", &num1, &denom1);
    ch = getchar(); //catches the sign
    scanf("%d/%d", &num2, &denom2);

    if (ch == '+')
    {
        resultNum = num1 * denom2 + num2 * denom1;
        resultDenom = denom1 * denom2; //make the denominators equal
    }
    else if (ch == '-')
    {
        resultNum = num1 * denom2 - num2 * denom1;
        resultDenom = denom1 * denom2; //make the denominators equal
    }
    else if (ch == '*')
    {
        resultNum = num1 * num2;
        resultDenom = denom1 * denom2;
    }
    else if (ch == '/')
    {
        resultNum = num1 / num2;
        resultDenom = denom1 / denom2;
    }

    if (resultNum == 0) //i added this because otherwise result is not looking nice (i.e. 1/2-1/2=0/4)
        printf("0");
    else
        printf("The result is %d/%d\n", resultNum, resultDenom);

    return 0;
}
