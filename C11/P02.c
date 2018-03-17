#include <stdio.h>

void FindClosestFlight(int desiredTime, int *departureTime, int *arrivalTime);

int main(void)
{
    int hour, minute;
    int departureTime, arrivalTime;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%d", &hour, &minute);

    minute += hour * 60;

    FindClosestFlight(minute, &departureTime, &arrivalTime);

    printf("Closest departure time is: %d:%.2d\n", departureTime/60, departureTime%60);
    printf("Closest arrival time is: %d:%.2d", arrivalTime/60, arrivalTime%60);

    return 0;
}

void FindClosestFlight(int desiredTime, int *departureTime, int *arrivalTime)
{
    //all hours are converted to mins and then conditions added
    //if user input minute is closer to first one, it is selected. if it is closer to second one, that is selected
    //also minutes should be in specified ranges

    if (desiredTime >= 480 && desiredTime < 583 && desiredTime - 480 < 583 - desiredTime)
    {
        *departureTime = 480;
        *arrivalTime = 616;
    }
    else if (desiredTime >= 480 && desiredTime < 583 && desiredTime - 480 >= 583 - desiredTime)
    {
        *departureTime = 480;
        *arrivalTime = 712;
    }

    if (desiredTime >= 583 && desiredTime < 679 && desiredTime - 583 < 679 - desiredTime)
    {
        *departureTime = 583;
        *arrivalTime = 712;
    }
    else if (desiredTime >= 583 && desiredTime < 679 && desiredTime - 583 >= 679 - desiredTime)
    {
        *departureTime = 679;
        *arrivalTime = 811;
    }

    if (desiredTime >= 679 && desiredTime < 767 && desiredTime - 679 < 767 - desiredTime)
    {
        *departureTime = 679;
        *arrivalTime = 811;
    }
    else if (desiredTime >= 679 && desiredTime < 767 && desiredTime - 679 >= 767 - desiredTime)
    {
        *departureTime = 767;
        *arrivalTime = 900;
    }

    if (desiredTime >= 767 && desiredTime < 840 && desiredTime - 767 < 840 - desiredTime)
    {
        *departureTime = 767;
        *arrivalTime = 900;
    }
    else if (desiredTime >= 767 && desiredTime < 840 && desiredTime - 767 >= 840 - desiredTime)
    {
        *departureTime = 840;
        *arrivalTime = 968;
    }

    if (desiredTime >= 840 && desiredTime < 945 && desiredTime - 840 < 945 - desiredTime)
    {
        *departureTime = 840;
        *arrivalTime = 968;
    }
    else if (desiredTime >= 840 && desiredTime < 945 && desiredTime - 840 >= 945 - desiredTime)
    {
        *departureTime = 945;
        *arrivalTime = 1075;
    }

    if (desiredTime >= 945 && desiredTime < 1140 && desiredTime - 945 < 1140 - desiredTime)
    {
        *departureTime = 945;
        *arrivalTime = 1075;
    }
    else if (desiredTime >= 945 && desiredTime < 1140 && desiredTime - 945 >= 1140 - desiredTime)
    {
        *departureTime = 1140;
        *arrivalTime = 1280;
    }

    if (desiredTime >= 1140 && desiredTime < 1305 && desiredTime - 1140 < 1305 - desiredTime)
    {
        *departureTime = 1140;
        *arrivalTime = 1280;
    }
    else if (desiredTime >= 1140 && desiredTime < 1305 && desiredTime - 1140 >= 1305 - desiredTime)
    {
        *departureTime = 1305;
        *arrivalTime = 1438;
    }

    //part below is for input between 9:45 and 00:00

    if (desiredTime >= 1305 && desiredTime <= 1440)
    {
        *departureTime = 1305;
        *arrivalTime = 1438;
    }

    //part below is for input between 00:00 and 8:00
    //173 is almost at equal distance to both 9:45 and 8:00
    //don't forget there is 135 minutes between 9:45 and 00:00(which is 1440 in total)

    if (desiredTime < 480 && desiredTime >= 173)
    {
        *departureTime = 480;
        *arrivalTime = 616;
    }
    else if (desiredTime < 480 && desiredTime < 173)
    {
        *departureTime = 1305;
        *arrivalTime = 1438;
    }
}
