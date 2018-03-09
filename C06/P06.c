#include <stdio.h>

int main(void)
{
    int n, square = 0; //loop will not begin if square is not assigned 0 in declaration

    printf("Please enter a number: ");
    scanf("%d", &n);

    for(int i = 1; square <= n; i++)
    {
        square = i * i;

        if (square%2 == 0) //discarding square values if they are not even numbers
            printf("%d\n", square); //no else statement needed as the loop ends automatically

    }

    return 0;
}
