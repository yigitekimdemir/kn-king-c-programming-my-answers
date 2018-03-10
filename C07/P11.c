#include <stdio.h>

int main(void)
{
    char ch, nameInitial;

    printf("Enter a first and last name: ");

    while((ch = getchar()) == ' ');

    do
    {
        nameInitial = ch;
    }
    while (nameInitial == ' '); //just loops 1 time only

    while ((ch = getchar()) != ' '); //skips all other letters of name
    while ((ch = getchar()) == ' '); //skips spaces until last name

    do
    {
        printf("%c", ch);
        ch = getchar();
        if (ch == '\n') //2 statements did not work in while statement, so i put it here to get out of the loop with new line
            break;
    } while (ch != ' '); //loops until sees space character, unless there is new line character

    printf(", %c.", nameInitial);

    return 0;
}
