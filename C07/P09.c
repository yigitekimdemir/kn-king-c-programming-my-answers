#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%2d:%d", &hour, &minute);

    while ((ch = getchar()) == ' ') //skips all spaces before catching a character
    ;
    ch = toupper(ch); //convert p to P, a to A
    if (ch == 'P')
        hour += 12;

    printf("Equivalent 24-hour time: %d:%d", hour, minute);

    return 0;
}
