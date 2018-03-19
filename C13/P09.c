#include <stdio.h>
#include <ctype.h> //required for toupper function

#define N 50

int ComputeVowelCount (const char *sentence);

int main(void)
{
    char sentenceArray[N]; //array to hold the string

    printf("Enter a sentence: ");

    gets(sentenceArray); //records the input to the array

    for (char *p = sentenceArray; *p != '\0'; p++) //converts all characters to uppercase
        *p = toupper(*p);

    printf("Your sentence contains %d vowels.", ComputeVowelCount(sentenceArray)); //prints the function return value

    return 0;
}

int ComputeVowelCount(const char *sentence)
{
    const char *pto_sentence = sentence; //pointer to position 0 of the array
    int sum = 0; //vowel count is in here

    for (; *pto_sentence != '\0'; pto_sentence++) //increments pointer until sees null character
    {

    switch (*pto_sentence)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            sum++;
            break;
        }
    }
    return sum;
}
