#include <stdio.h>

int main(void)
{
    int days, startingDay, endOfWeek;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startingDay);

    endOfWeek = startingDay;

    for(int i = 1; i <= days; i++)
    {

     while(startingDay > 1) //calculates how many spaces to print on screen
     {
        printf("   "); //3 spaces here
        startingDay--;
     }

    printf("%3d", i);

    //below if checks if it is the end of week or not
    if ((i + endOfWeek) % 7 == 1) //i had to use endOfWeek variable because startingDay gets decremented in while loop, i needed its original value
        printf("\n");

    }

    return 0;
}
