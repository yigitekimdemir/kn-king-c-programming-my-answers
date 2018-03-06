//extended version of C04P02 to handle three digit numbers without arithmetic calc
//only works for three digit numbers, unlike the previous project

#include <stdio.h>

int main(void)
{
    int number1 = 0, number2 = 0, number3 = 0; //better to assign value 0 in the beginning IMO

    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &number1, &number2, &number3); //user inputs to three digits

    printf("%d%d%d", number3, number2, number1); //printing the digits in reverse order

    return 0;
}

