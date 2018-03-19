#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define ARRAY_SIZE 30

char sentenceArray[ARRAY_SIZE] = {false}, *pto_sentenceArray = sentenceArray, *pto_sentenceArray2 = sentenceArray; //second pointer is to check letters

void ReadCharacters(void);
bool EvaluateCharacters(void);

int main(void)
{
    printf("Enter a message: ");

    ReadCharacters(); //call for function to read characters

    if (EvaluateCharacters())
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}

void ReadCharacters(void)
{
    for(; pto_sentenceArray < &sentenceArray[ARRAY_SIZE]; pto_sentenceArray++)
    {
        scanf("%c", pto_sentenceArray);

        if (*pto_sentenceArray == '\n') //gets out of loop when it sees enter and also gets one position back in array to prevent recording it
        {
            pto_sentenceArray--;
            break;
        }
        else if (ispunct(*pto_sentenceArray)) //punctuations are skipped
        {
            pto_sentenceArray--;
            continue;
        }
        else if (*pto_sentenceArray == ' ') //whitespaces are skipped
        {
            pto_sentenceArray--;
            continue;
        }
        *pto_sentenceArray = tolower(*pto_sentenceArray); //recorded character is converted to lowercase letter for checking
    }
}

bool EvaluateCharacters(void)
{
    while (1)
    {
        if (*pto_sentenceArray2 == *pto_sentenceArray) //pto_sentenceArray2 is the first value in array, other pointer is the last item
        {
            pto_sentenceArray2++; //get to the next character
            pto_sentenceArray--; //get one character before

            if (pto_sentenceArray2 > pto_sentenceArray) //when they come to each other, end the loop
                break;
        }
        else //breaks the loop when it sees a different character on the way back
        {
            return false;
        }
    }

    return true; //jumps here after break
}
