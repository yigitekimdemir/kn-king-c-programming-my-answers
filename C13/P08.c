#include <stdio.h>
#include <ctype.h>

#define ARRAY_SIZE 50

int ComputeScrabbleValue(const char *word);

int main(void)
{
    char scrabbleArray[ARRAY_SIZE];

    printf("Enter a word: ");

    gets(scrabbleArray); //records all letters in a string array

    for (char *p = scrabbleArray; *p != '\0'; p++) //converts all characters to uppercase
        *p = toupper(*p);

    printf("Scrabble value: %d", ComputeScrabbleValue(scrabbleArray)); //activate the function and print the return value

    return 0;
}

int ComputeScrabbleValue(const char *word)
{
    int score = 0;

    for (const char *pto_word = word; *pto_word != '\0'; pto_word++)
    {
        switch (*pto_word) //modified from the original project
        {
        case 'A':
        case 'E':
        case 'I':
        case 'L':
        case 'N':
        case 'O':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
            score += 1;
            break;
        case 'D':
        case 'G':
            score += 2;
            break;
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            score += 3;
            break;
        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            score += 4;
            break;
        case 'K':
            score += 5;
            break;
        case 'J':
        case 'X':
            score += 8;
            break;
        case 'Q':
        case 'Z':
            score += 10;
            break;
        }
    }

    return score;
}
