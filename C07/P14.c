#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1, average;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    for (;;)
    {
        average = (y + (x / y))/2.0;

        if (fabs(y - average) < (0.00001 * y))
            break;
        else
            y = average;
    }

    printf("Square root: %lf", average);

    return 0;
}
