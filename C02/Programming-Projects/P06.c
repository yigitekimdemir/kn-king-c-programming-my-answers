#include <stdio.h>

//not sure why this formula gives results different than original calculation

int main(void)
{
    int x, result;

    printf("Enter an X number: ");
    scanf("%d", &x);

    result = (((((((((3*x) + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 6;

    printf("%d", result);

    return 0;
}
