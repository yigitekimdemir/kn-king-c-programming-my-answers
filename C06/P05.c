#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The reversal is: ");

    do
    {
        printf("%d", (number % 10)); //prints the last digit to screen
        number /= 10; //throws away the last digit and makes the next digit the last digit
    } while (number > 0);

    return 0;
}
