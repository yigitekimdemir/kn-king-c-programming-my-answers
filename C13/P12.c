#include <stdio.h>
#include <string.h>

#define ROW 30
#define WORD 20

#define ZERO 0

int main(void)
{
    char sentenceArray[ROW][WORD+1] = {'\0'}, *p = &sentenceArray[ZERO][ZERO]; //array and its pointer

    char mark; //to save punctuation at the end of sentence

    int count = 0;

    printf("Enter a sentence: ");

    while (mark != '!' && mark != '?' && mark != '.') //goes on until punctuation appears
    {
        scanf("%s", &sentenceArray[ZERO + count][ZERO]); //records each word to each row
        count++; //to get to new row

        while (*p != '!' || *p != '?' || *p != '.') //this 2nd loop is required for getting the punctuation mark
        {
            p++;

            if (p == &sentenceArray[ROW-1][WORD]) //search for punc. if not available, get out of loop
            {
                p = &sentenceArray[ZERO][ZERO];
                break;
            }
            if (*p == '!' || *p == '?' || *p == '.') //if punc mark is found, fill in the mark variable and put NULL in its place in string
            {
                mark = *p;
                *p = '\0';
            }
        }
    }

    while (count >= 0)
    {
        printf("%s ", sentenceArray[count]);
        count--;
    }

    printf("%c", mark);

    return 0;
}
