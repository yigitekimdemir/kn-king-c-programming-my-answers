#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, minute, difference, checkDifference = 1440, i, departureTime, arrivalTime;
    int departureTimes[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrivalTimes[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time: ");
    scanf("%2d:%d", &hour, &minute);

    minute += hour * 60;

    printf("Closest departure time is: ");

    for (i = 0; i < 8; i++)
    {

        if (minute > 480) //things get complex between 21:45 and 08:00, so we will evaluate that condition in else statement
        {
            difference = abs(departureTimes[i] - minute); //get absolute value of hour-input
            if (difference < checkDifference)
            {
                checkDifference = difference; //i used checkDifference variable for storing the lowest difference
                departureTime = departureTimes[i];
                arrivalTime = arrivalTimes[i];
            }
            else
                continue;
        }
        else //this part is for the 21:45-08:00 inputs
        {
            if (minute >= 173)
            {
                departureTime = 480;
                arrivalTime = 616;
            }
            else
            {
                departureTime = 1305;
                arrivalTime = 1438;
            }
        }
    }

    printf("%.2d:%.2d", departureTime/60, departureTime%60);

    printf("\nArrival time is: %.2d:%.2d", arrivalTime/60, arrivalTime%60);

    return 0;
}
