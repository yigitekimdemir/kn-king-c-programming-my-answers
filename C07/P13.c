#include <stdio.h>

int main(void)
{
    char ch;
    int spaces = 0, characterCount = 0;
    float average;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
            spaces++; //calculates the spaces in the sentence
        else if (ch != ' ')
            characterCount++; //calculates the letters in the sentence
    }

    average = (float)characterCount / ++spaces; //x spaces means x+1 words, so ++spaces is actually words count in sentence, casting calculation to float for correct division result

    printf("Average word length: %.1f", average);

    return 0;
}
