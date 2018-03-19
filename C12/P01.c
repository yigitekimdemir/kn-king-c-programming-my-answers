#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 20

int main(void)
{
    char ch, sentenceArray[N] = {false}; //fill false to all characters in array
    char *p = sentenceArray; //pointer to 0 position of array

    printf("Enter a message: ");

    while ((ch = getchar()) != '\n')
    {
        if (p == &sentenceArray[N]) //breaks when the array is full
            break;

        *p = ch; //assigns the character to the address it is pointing to in array
        p++; //gets to the next address
    }

    for (p = &sentenceArray[N-1]; p >= sentenceArray; p--)
    {
        if (*p == false) //this is to skip the unfilled entries in array
            continue;
        else
            printf("%c", *p);
    }
    return 0;
}
