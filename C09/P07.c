#include <stdio.h>

int Power(int, int);

int main(void)
{
    int x, n;

    printf("Enter an ""x"" number: ");
    scanf("%d", &x);
    printf("Enter an ""n"" number: ");
    scanf("%d", &n);

    printf("%d", Power(x, n));

    return 0;
}

int Power (int x, int n)
{
    int result;

    if (n == 0)
        return 1;
    else if (n % 2 == 0)
    {
        result = Power(x, n/2);
        result *= result;
        return result;
    }
    else if (n % 2 != 0)
    {
        result = x * Power(x, n - 1);
        return result;
    }
}
