#include <stdio.h>
#include <stdbool.h>

#define ARRAY_LENGTH 50

int main(void)
{
    char sentenceArray[ARRAY_LENGTH] = {false}, mark, ch, *pto_sentenceArray = sentenceArray; //pointer holds the address to the beginning of array

    printf("Enter a sentence: ");

    for (; pto_sentenceArray < sentenceArray + ARRAY_LENGTH; pto_sentenceArray++)
    {
        ch = getchar();

        if (ch == '.' || ch == '!' || ch == '?')
        {
            mark = ch; //store the sentence ending character in a separate variable
            pto_sentenceArray--; //get the array address back one character because it is not filled in this condition
            break;
        }
        else
        {
            *pto_sentenceArray = ch; //put the rest of the characters in array
        }
    }

    for (; pto_sentenceArray >= &sentenceArray[0]; pto_sentenceArray--)
    {
        ch = *pto_sentenceArray;

        if (pto_sentenceArray == &sentenceArray[0]) //this if statement is used for the first word because there is no whitespace before it
        {
            char *pto_sentenceArray2 = pto_sentenceArray; //local pointer for easy calculation and protecting original pointer position

            while (1)
            {
                if (*pto_sentenceArray2 == ' ' || *pto_sentenceArray2 == false) //breaks when it gets to new word which is decided by whitespace
                    break;
                putchar(*pto_sentenceArray2); //prints characters in order
                pto_sentenceArray2++; //increase local pointer to print the next character
            }
        }
        else if (ch == ' ') //get to the space before each word
        {
            char *pto_sentenceArray2 = pto_sentenceArray; //local pointer for easy calculation and protecting original pointer position

            while (1)
            {
                putchar(*(pto_sentenceArray2 + 1)); //print characters after whitespace
                if (*(pto_sentenceArray2 + 1) == ' ' || *(pto_sentenceArray2 + 1) == false) //when it is another whitespace or false, break the loop
                    break;
                pto_sentenceArray2++; //increase local pointer to print the next character
            }
        }
    }

    printf("%c", mark);

    return 0;
}
