#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char messageArray[80] = {false}, ch;
    int i, shiftAmount;

    printf("Enter message to be encrypted: ");

    for (i = 0; i < 80; i++)
    {
        ch = getchar();
        if (ch == '\n')
            break;

        messageArray[i] = ch;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shiftAmount);

    for (i = 0; i < 80 ; i++)
    {
        if (messageArray[i] >= 65 && messageArray[i] <= 90)
        messageArray[i] = ((messageArray[i] - 'A') + shiftAmount) %26 + 'A'; //formula was given by book
        else if (messageArray[i] >= 97 && messageArray[i] <= 122)
        messageArray[i] = ((messageArray[i] - 'a') + shiftAmount) %26 + 'a';

        putchar(messageArray[i]);

        if (messageArray[i] == false) //to prevent unused false values in array appear as text
            break;
    }

    return 0;
}
