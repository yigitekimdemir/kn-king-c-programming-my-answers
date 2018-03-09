#include <stdio.h>

int main(void)
{
    int number1, number2, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    for(; number2 != 0;) //don't like to use "while" loops if not extremely necessary
    {
        //formula below was given by author of the book, K.N.King
        remainder = number1 % number2;
        number1 = number2;
        number2 = remainder;
    }

    printf("Greatest common divisor: %d", number1);

    return 0;
}
