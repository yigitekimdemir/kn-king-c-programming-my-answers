#include <stdio.h>

int Calculation(int);

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d", Calculation(n));

    return 0;
}

int Calculation(int a)
{
    return (3*a*a*a*a*a + 2*a*a*a*a - 5*a*a*a - a*a + 7*a - 6);
}
