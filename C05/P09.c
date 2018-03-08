#include <stdio.h>

int main(void)
{
    int firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &firstMonth, &firstDay, &firstYear);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &secondMonth, &secondDay, &secondYear);

    //first we check with the years
    //if they are same, check with month too
    //if months are the same, check with days
    //if all is same, apocalypse is here!
    //be careful that there are 3 indented if statements, allman style rules

    if (firstYear < secondYear)
        printf("%d/%d/%d is earlier than %d/%d/%d", firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
    else if (firstYear > secondYear)
        printf("%d/%d/%d is earlier than %d/%d/%d", secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
    else if (firstYear == secondYear)
    {
        if (firstMonth < secondMonth)
            printf("%d/%d/%d is earlier than %d/%d/%d", firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
        else if (firstMonth > secondMonth)
            printf("%d/%d/%d is earlier than %d/%d/%d", secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
        else if (firstMonth == secondMonth)
        {
            if (firstDay < secondDay)
            printf("%d/%d/%d is earlier than %d/%d/%d", firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
            else if (firstDay > secondDay)
            printf("%d/%d/%d is earlier than %d/%d/%d", secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
            else if (firstDay == secondDay)
                printf("Apocalypse NOW!");
        }

    }
    return 0;
}
