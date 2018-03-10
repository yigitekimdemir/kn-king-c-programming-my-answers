#include <stdio.h>
#include <ctype.h> //required for toupper() function

int main(void)
{
    int hour, minute;
    char ch;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%d", &hour, &minute);

    while ((ch = getchar()) == ' ') //catches the A or P after skipping spaces if available
    ;
    ch = toupper(ch); //convert all to uppercase
    if (ch == 'A')
        minute += hour * 60;
    else if (ch == 'P')
        minute += (hour * 60 + 12*60); //PM is 12 hours more than AM

    //sorry if it looks a little bit complicated, i wanted to keep the variable use to minimum

    printf("Closest departure time is: ");

    //all hours are converted to mins and then conditions added
    //if user input minute is closer to first one, it is selected. if it is closer to second one, that is selected
    //also minutes should be in specified ranges

        if (minute >= 480 && minute < 583 && minute - 480 < 583 - minute)
            printf("8:00 AM, arriving at 10:16 AM");
        else if (minute >= 480 && minute < 583 && minute - 480 >= 583 - minute)
            printf("9:43 AM, arriving at 11:52 AM");

        if (minute >= 583 && minute < 679 && minute - 583 < 679 - minute)
            printf("9:43 AM, arriving at 11:52 AM");
        else if (minute >= 583 && minute < 679 && minute - 583 >= 679 - minute)
            printf("11:19 AM, arriving at 1:31 PM");

        if (minute >= 679 && minute < 767 && minute - 679 < 767 - minute)
            printf("11:19 AM, arriving at 1:31 PM");
        else if (minute >= 679 && minute < 767 && minute - 679 >= 767 - minute)
            printf("12:47 PM, arriving at 3:00 PM");

        if (minute >= 767 && minute < 840 && minute - 767 < 840 - minute)
            printf("12:47 PM, arriving at 3:00 PM");
        else if (minute >= 767 && minute < 840 && minute - 767 >= 840 - minute)
            printf("2:00 PM, arriving at 4:08 PM");

        if (minute >= 840 && minute < 945 && minute - 840 < 945 - minute)
            printf("2:00 PM, arriving at 4:08 PM");
        else if (minute >= 840 && minute < 945 && minute - 840 >= 945 - minute)
            printf("3:45 PM, arriving at 5:55 PM");

        if (minute >= 945 && minute < 1140 && minute - 945 < 1140 - minute)
            printf("3:45 PM, arriving at 5:55 PM");
        else if (minute >= 945 && minute < 1140 && minute - 945 >= 1140 - minute)
            printf("7:00 PM, arriving at 9:20 PM");

        if (minute >= 1140 && minute < 1305 && minute - 1140 < 1305 - minute)
            printf("7:00 PM, arriving at 9:20 PM");
        else if (minute >= 1140 && minute < 1305 && minute - 1140 >= 1305 - minute)
            printf("9:45 PM, arriving at 11:58 PM");

            //part below is for input between 9:45 and 00:00

        if (minute >= 1305 && minute <= 1440)
            printf("9:45 PM, arriving at 11:58 PM");

            //part below is for input between 00:00 and 8:00
            //173 is almost at equal distance to both 9:45 and 8:00
            //don't forget there is 135 minutes between 9:45 and 00:00(which is 1440 in total)

        if (minute < 480 && minute >= 173)
            printf("8:00 AM, arriving at 10:16 AM");
        else if (minute < 480 && minute < 173)
            printf("9:45 PM, arriving at 11:58 PM");

    return 0;
}
