/* Formats a file of text */

#include <string.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(void)
{
    char word[MAX_WORD_LEN+2];
    int wordLen;

    ClearLine();
    for(;;)
    {
        ReadWord(word, MAX_WORD_LEN+1);
        wordLen = strlen(word);
        if (wordLen == 0)
        {
            FlushLine();
            return 0;
        }

        if (wordLen > MAX_WORD_LEN)
            word[MAX_WORD_LEN] = '*';

        if (wordLen + 1 > SpaceRemaining())
        {
            WriteLine();
            ClearLine();
        }
        AddWord(word);
    }
}
