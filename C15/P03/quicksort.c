#include "quicksort.h"

void Quicksort(int a[], int low, int high)
{
    int middle;

    if (low >= high)
        return;

    middle = Split(a, low, high);
    Quicksort(a, low, middle - 1);
    Quicksort(a, middle + 1, high);
}

int Split(int a[], int low, int high)
{
    int part_element = a[low];

    for (;;)
    {
        while (low < high && part_element <= a[high])
            high--;
        if (low >= high) break;
        a[low++] = a[high];

        while (low < high && a[low] <= part_element)
            low++;
        if (low >= high) break;
        a[high--] = a[low];
    }

    a[high] = part_element;
    return high;
}
