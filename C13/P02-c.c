/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 //maximum number of reminders
#define MSG_LEN 60 //max length of reminder message

int ReadLine(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3];
    char msgStr[MSG_LEN+1], timeStr[6];
    int day, i, j, numRemind = 0;
    int month;

    for (;;)
    {
        if (numRemind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d/%2d", &month, &day);

        if (month == 0)
            break;

        sprintf(timeStr, "%2d/%2d", month, day);
        ReadLine(msgStr, MSG_LEN);

        for (i = 0; i < numRemind; i++)
            if (strcmp(timeStr, reminders[i]) < 0)
                break;
        for (j = numRemind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], timeStr);
        strcat(reminders[i], msgStr);

        if (day < 0 || day > 31) //restarts the loop if an invalid day is entered
        {
            printf("You have entered an invalid day, please try again.\n");
            continue;
        }

        if (month < 0 || month > 12) //restarts the loop if an invalid day is entered
        {
            printf("You have entered an invalid month, please try again.\n");
            continue;
        }

        numRemind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < numRemind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int ReadLine(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
