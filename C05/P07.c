#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
        printf("Largest: %d\n", num1);
    else if (num1 < num2 && num1 < num3 && num1 < num4)
        printf("Smallest: %d", num1);

    if (num2 > num1 && num2 > num3 && num2 > num4)
        printf("Largest: %d\n", num2);
    else if (num2 < num1 && num2 < num3 && num2 < num4)
        printf("Smallest: %d", num2);

    if (num3 > num1 && num3 > num2 && num3 > num4)
        printf("Largest: %d\n", num3);
    else if (num3 < num1 && num3 < num2 && num3 < num4)
        printf("Smallest: %d", num3);

    if (num4 > num1 && num4 > num2 && num4 > num3)
        printf("Largest: %d\n", num4);
    else if (num4 < num1 && num4 < num2 && num4 < num3)
        printf("Smallest: %d", num4);

    return 0;
}
