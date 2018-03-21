#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void Encrypt(char *message, int shift);

int main(void)
{
    char messageArray[81] = {'\0'}, ch;
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

    Encrypt(messageArray, shiftAmount);

    return 0;
}

void Encrypt(char *message, int shift)
{
    char *p = message;

    while (*p != '\0')
    {
        if (*p >= 65 && *p <= 90)
            *p = ((*p - 'A') + shift) %26 + 'A'; //formula was given by book
        else if (*p >= 97 && *p <= 122)
            *p = ((*p - 'a') + shift) %26 + 'a';

        p++;
    }

    printf("%s", message);

}
