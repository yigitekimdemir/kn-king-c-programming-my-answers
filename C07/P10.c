#include <stdio.h>
#include <ctype.h> //required for toupper function

int main(void)
{
    char ch;
    int i = 0; //for counting vowels

    printf("Enter a sentence: ");

    for(; ch != '\n';) //loops until sees new line
    {
        ch = getchar(); //get a character
        ch = toupper(ch); //convert it to uppercase for easier switch statement
        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            i++;
            break;
        }
    }

    printf("Your sentence contains %d vowels.", i);

    return 0;
}
