#include <stdio.h>

int main(void)
{
    int number, digit; //variables for input and digit count

    printf("Enter a number: ");
    scanf("%d", &number);

    //if else for checking the digit count of the input

    if (number >= 0 && number <= 9)
        digit = 1;
    else if (number >= 10 && number <= 99)
        digit = 2;
    else if (number >= 100 && number <= 999)
        digit = 3;
    else if (number >= 1000 && number <= 9999)
        digit = 4;

    printf("The number %d has %d digits", number, digit);

    return 0;
}
