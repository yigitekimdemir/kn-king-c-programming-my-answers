#include <stdio.h>
#include <ctype.h> //required for toupper function

int main(void)
{
    char ch;
    int scoreArray[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}; //array with points for each letter, A to Z in order
    int score = 0; //initial score is 0 of course

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n') //continue until new line
    {
        ch = toupper(ch); //convert all letters to capitals for easier calculation and make it style-proof
        ch %= 65; //A in ASCII table is 65, so remainder of A with division to 65 is 0, i needed this to use it as variable inside array order

        score += scoreArray[(int)ch]; //casting ch to int makes me use it as an index for scoreArray
    }

    printf("Scrabble value: %d", score);

    return 0;
}
