#include <stdio.h>

int main(void)
{
    int number, numberTemp;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    printf("In octal, your number is: ");

    // this project could be done with many variables but not necessarily,
    // though numberTemp is necessary for keeping the number variable in original state

    numberTemp = (number / 8 / 8 / 8 / 8) % 8; //first digit
    printf("%d", numberTemp);

    numberTemp = (number / 8 / 8 / 8) % 8; //second digit
    printf("%d", numberTemp);

    numberTemp = (number / 8 / 8) % 8; //third digit
    printf("%d", numberTemp);

    numberTemp = (number / 8) % 8; //fourth digit
    printf("%d", numberTemp);

    numberTemp = number % 8; //last digit
    printf("%d", numberTemp);

    return 0;
}
