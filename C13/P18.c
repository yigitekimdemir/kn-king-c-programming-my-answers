#include <stdio.h>
#include <string.h>

int main(void)
{
    char *monthArray[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %s %d, %d", monthArray[month - 1], day, year);

    return 0;
}
