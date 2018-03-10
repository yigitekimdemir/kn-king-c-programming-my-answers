#include <stdio.h>

int main(void)
{
    float num1, num2, num3;
    char ch1, ch2;

    printf("Enter an expression: ");

    scanf("%f", &num1);
    ch1 = getchar();
    scanf("%f", &num2);
    ch2 = getchar();
    scanf("%f", &num3);

    switch (ch1)
    {
    case '+':
        num1 += num2; break;
    case '-':
        num1 -= num2; break;
    case '*':
        num1 *= num2; break;
    case '/':
        num1 /= num2; break;
    }

    switch (ch2)
    {
    case '+':
        num1 += num3; break;
    case '-':
        num1 -= num3; break;
    case '*':
        num1 *= num3; break;
    case '/':
        num1 /= num3; break;
    }

    printf("%.1f", num1);

    return 0;
}
