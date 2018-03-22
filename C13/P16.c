#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 20

void Reverse(char *message);

int main(void)
{
    char sentenceArray[N+1] = {false}; //fill false to all characters in array

    printf("Enter a message: ");
    gets(sentenceArray);
    Reverse(sentenceArray);

    return 0;
}

void Reverse(char *message)
{
    char *p = message;
    char *q = message;

    for (; *(q+1) != '\0'; ++q); //this is to get the second pointer to the last letter in string array

    while (1)
    {
        char ch; //temporary variable used to take a letter into buffer

        ch = *p;
        *p = *q;
        *q = ch;

        p++;
        q--;

        if (p == q || p+1 == q) //this is required because sometimes they do not meet, they just get near each other depending on the length of sentence
            break;
    }

    printf("%s", message);
}
