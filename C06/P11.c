#include <stdio.h>

int main(void)
{
    float e = 0.0f, factorial = 1.0f; //if factorial is not float, the result is wrong
    int n;

    printf("Please enter an integer to calculate e: ");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++) //outer loop for increasing up to user input
    {
        for (int i = 1; i <= j; i++) //inner loop for local factorial variable calculation
        {
            factorial *= i;
        }
        e += 1/factorial; //adding 1/n! to e constant
        factorial = 1; //resetting factorial to 1 for the next turn of the loop
    }

    e += 1.0f; //1 must be added for 1+1/n! calculation

    printf("%.4f", e);

    return 0;
}



