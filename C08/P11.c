#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char ch;
    //making all values false at the beginning makes the program easier, false values will not be printed at the end even if number is shorter than 15
    char numberArray[15] = {false};

    printf("Enter phone number: ");

    for (int i = 0; i < 15; i++)
    {
        ch = getchar();
        if (ch == '\n')
            break;

        switch(ch) //assign numbers to letters inputted
        {
        case 'A':
        case 'B':
        case 'C':
            ch = '2';
            break;
        case 'D':
        case 'E':
        case 'F':
            ch = '3';
            break;
        case 'G':
        case 'H':
        case 'I':
            ch = '4';
            break;
        case 'J':
        case 'K':
        case 'L':
            ch = '5';
            break;
        case 'M':
        case 'N':
        case 'O':
            ch = '6';
            break;
        case 'P':
        case 'R':
        case 'S':
            ch = '7';
            break;
        case 'T':
        case 'U':
        case 'V':
            ch = '8';
            break;
        case 'W':
        case 'X':
        case 'Y':
            ch = '9';
            break;
        default:
            break;
        }

        numberArray[i] = ch;
    }

    for(int i = 0; i < 15; i++)
        printf("%c", numberArray[i]);

    return 0;
}
