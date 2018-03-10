#include <stdio.h>

int main(void)
{
    int myNumber, i, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &myNumber);

    for (i = 1; i <= myNumber; ++i)
    {
        factorial *= i;
    }

    printf("Factorial of %d: %d", myNumber, factorial);

    return 0;
}
