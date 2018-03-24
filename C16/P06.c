#include <stdio.h>

int main(void)
{
    struct dates
    {
        int month;
        int day;
        int year;
    } firstDate, secondDate;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &firstDate.month, &firstDate.day, &firstDate.year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &secondDate.month, &secondDate.day, &secondDate.year);

    if (firstDate.year < secondDate.year)
        printf("%d/%d/%d is earlier than %d/%d/%d", firstDate.month, firstDate.day, firstDate.year, secondDate.month, secondDate.day, secondDate.year);
    else if (firstDate.year > secondDate.year)
        printf("%d/%d/%d is earlier than %d/%d/%d", secondDate.month, secondDate.day, secondDate.year, firstDate.month, firstDate.day, firstDate.year);
    else if (firstDate.year == secondDate.year)
    {
        if (firstDate.month < secondDate.month)
            printf("%d/%d/%d is earlier than %d/%d/%d", firstDate.month, firstDate.day, firstDate.year, secondDate.month, secondDate.day, secondDate.year);
        else if (firstDate.month > secondDate.month)
            printf("%d/%d/%d is earlier than %d/%d/%d", secondDate.month, secondDate.day, secondDate.year, firstDate.month, firstDate.day, firstDate.year);
        else if (firstDate.month == secondDate.month)
        {
            if (firstDate.day < secondDate.day)
            printf("%d/%d/%d is earlier than %d/%d/%d", firstDate.month, firstDate.day, firstDate.year, secondDate.month, secondDate.day, secondDate.year);
            else if (firstDate.day > secondDate.day)
            printf("%d/%d/%d is earlier than %d/%d/%d", secondDate.month, secondDate.day, secondDate.year, firstDate.month, firstDate.day, firstDate.year);
            else if (firstDate.day == secondDate.day)
                printf("Apocalypse NOW!");
        }

    }
    return 0;
}
