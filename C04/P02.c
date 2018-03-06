//extended version of C04P01 to handle three digit numbers

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a three digit number: ");
    scanf("%d", &number);

    //second calculation is to find the middle digit in a three digit number in an arithmetic manner
    printf("The reversal is: %d%d%d", (number%10), ((number%100 - number%10) / 10), (number/100));

    return 0;
}

