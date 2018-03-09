#include <stdio.h>

int main(void)
{
    int month, day, year, month2, day2, year2; //2 different variables for each to compare them

    //first scanf should be outside the loop to meet the loop conditions

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%2d", &month, &day, &year);

    while (month2 != 0 && day2 != 0 && year2 != 0)
    {

        //second scanf is unavoidable
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%2d", &month2, &day2, &year2);

        //if statement below is necessary even though while has the condition, otherwise it counts
        //0 as well because loop gets applied after scanf

        if (month2 == 0 && day2 == 0 && year2 == 0)
            break;

        if (year2 < year)
        {
            year = year2; //don't forget to make all equal, otherwise only the smallest value of each input is applied
            month = month2;
            day = day2;
        }
        else if (year2 == year)
        {
            if (month2 < month)
            {
                year = year2;
                month = month2;
                day = day2;
            }
            else if (month2 == month)
            {
                if (day2 < day)
                {
                    year = year2;
                    month = month2;
                    day = day2;
                }
                else if (day2 == day)
                    printf("Your mind is playin' games with you!");
                return 0; //break; doesn't work here because it prints dates anyway, so return 0 is needed
            }
        }
    }

    printf("%d/%d/%.2d is the earliest date", month, day, year);

    return 0;
}
