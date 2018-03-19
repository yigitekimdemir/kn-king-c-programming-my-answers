/* Finds the largest and smallest elements in an array */

#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    int b[N], big, small, *pto_b = b;

    printf("Enter %d numbers: ", N);
    for (; pto_b < b + N; pto_b++)
        scanf("%d", pto_b);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int *pto_a = a;

    *max = *min = *pto_a;
    pto_a++;
    for (; pto_a < a + n; pto_a++)
    {
        if (*pto_a > *max)
            *max = *pto_a;
        else if (*pto_a < *min)
            *min = *pto_a;
    }
}
