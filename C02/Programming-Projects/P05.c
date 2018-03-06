#include <stdio.h>

int main(void)
{
    int x, result;

    printf("Enter an X number: ");
    scanf("%d", &x); //assigning the user input to x variable

    result = 3*x*x*x*x*x + 2*x*x*x*x + 5*x*x*x + x*x + 7*x - 6; //calculating the polynom

    printf("%d", result);

    return 0;
}
