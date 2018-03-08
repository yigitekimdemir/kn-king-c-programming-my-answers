#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    //two different printf's are needed to differentiate between AM and PM. Chapter 5 has no characters yet so they cannot be used.
    if (hour > 12)
    {
        hour %= 12; //formula to convert hour to 12-hour format
        printf("Equivalent 12-hour time: %d:%.2d PM", hour, minute);
    }
    else
    {
        printf("Equivalent 12-hour time: %d:%.2d AM", hour, minute);
    }

    return 0;
}
