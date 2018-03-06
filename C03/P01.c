#include <stdio.h>

int main(void)
{
    int month, day, year; //variables for date elements

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year); //assigning input to variables

    printf("You entered the date %d%.2d%d", year, month, day); //printing on screen, be careful of second element for necessary result

    return 0;
}
