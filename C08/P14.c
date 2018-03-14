#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char sentenceArray[50] = {false}, mark, ch;
    int i, j;

    printf("Enter a sentence: ");

    for (i = 0; i < 50; i++)
    {
        ch = getchar();

        if (ch == '.' || ch == '!' || ch == '?')
        {
            mark = ch; //store the sentence ending character in a separate variable
            break;
        }
        else
        {
            sentenceArray[i] = ch; //put the rest of the characters in array
        }
    }

    for (i; i >= 0; i--)
    {
        ch = sentenceArray[i];

        if (ch == false) //skip until the the last letter of last word
            continue;

        if (ch != ' ') //skip the last word
            continue;

        if (ch == ' ') //get to the space before each word
        {
            j = i; //just to not change i variable, i stored its value in j

            while (1)
            {
                putchar(sentenceArray[j + 1]); //print characters after ' '
                if (sentenceArray[j + 1] == ' ' || sentenceArray[j + 1] == false)
                    break; //when it is another ' ' or false, break the loop
                j++; //increase j to print the next character
            }
        }
    }

    for (i = 0;;i++) //this loop is required for first word because there is no space before it
    {
        if (sentenceArray[i] == ' ') //breaks the loop after first word ends
            break;
        putchar(sentenceArray[i]);
    }

    printf("%c", mark);

    return 0;
}
