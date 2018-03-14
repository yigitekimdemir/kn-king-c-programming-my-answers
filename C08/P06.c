#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i;
    char ch, message[40];

    printf("Enter message: ");

    for(i = 0; i < 40; i++)
    {
        ch = getchar();
        if (ch == '\n')
            break;
        else
        {
            ch = toupper(ch);
            switch (ch)
            {
            case 'A': ch = '4'; break;
            case 'B': ch = '8'; break;
            case 'E': ch = '3'; break;
            case 'I': ch = '1'; break;
            case 'O': ch = '0'; break;
            case 'S': ch = '5'; break;
            }
            message[i] = ch;
        }
    }

    printf("In B1FF-speak: ");

    for(int j = 0; j <= i - 1; j++) //i-1 is needed because first for loop increases i for the last time
    {
        putchar(message[j]);
    }
    printf("!!!!!!!!!!");

    return 0;
}
