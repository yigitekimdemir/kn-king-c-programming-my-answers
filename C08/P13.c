#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char ch, nameInitial;
    char lastName[20] = {false}; //make unused array elements false

    printf("Enter a first and last name: ");

    while((ch = getchar()) == ' ');

    do
    {
        nameInitial = ch;
    }
    while (0); //just loops 1 time only

    while ((ch = getchar()) != ' '); //skips all other letters of name
    while ((ch = getchar()) == ' '); //skips spaces until last name

    for (int i = 0; i < 20; i++)
    {
        if (ch == '\n')
            break;

        lastName[i] = ch;
        ch = getchar();
    }

    for (int i = 0; i < 20; i++)
    {
        if (lastName[i] == false) //skip unused array elements
            break;
        printf("%c", lastName[i]);
    }

    printf(", %c.", nameInitial);

    return 0;
}
