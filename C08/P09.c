/* This project not works sometimes, just gives a blank screen rarely
if you have any idea why that happens, please make me aware because
I cannot see any flaws in the program */

/* This project fills a 10x10 table with letters from A to Z
in a random walk */

#include <stdio.h>
#include <time.h> //needed for getting time values to be used in number generation
#include <stdlib.h> //needed for srand and rand function to generate random numbers

int main(void)
{
    char walkArray[10][10];
    int direction, i, j; //i and j are used multiple times for different calculations
    char character = 'A'; //beginning character

    for (i = 0; i < 10; i++) //fill in '.' to all array elements
    {
        for (j = 0; j < 10; j++)
            walkArray[i][j] = '.';
    }

    srand((unsigned) time(NULL)); //initialize random number generator
    i = 0;
    j = 0;

    walkArray[i][j] = character; //0.0 position is 'A', which is beginning of the walk

    for(;;) //loops until break kicks in
    {
        direction = rand() % 4; //0 is up, 2 is down, 1 is left, 3 is right direction

        //when surrounded with letters in 4 sides, loop stops
        if (walkArray[i - 1][j] != '.' && walkArray[i][j - 1] != '.' && walkArray[i + 1][j] != '.' && walkArray[i][j + 1] != '.')
        {
            break;
        }
        else
        {

            if (direction == 0) //when it is needed to go up
            {
                if (i == 0 || walkArray[i - 1][j] != '.') //if it is currently in uppermost position or position already filled with a letter, choose a new direction
                    continue;
                else
                    i--; //i-- is one row higher
            }
            else if (direction == 1) //when it is needed to go left
            {
                if (j == 0 || walkArray[i][j-1] != '.') //if it is currently in leftmost position or position already filled with a letter, choose a new direction
                    continue;
                else
                    j--; //j-- is one column left
            }
            else if (direction == 2) //when it is needed to go down
            {
                if (i == 9 || walkArray[i + 1][j] != '.') //if it is currently in lowest position or position already filled with a letter, choose a new direction
                    continue;
                else
                    i++; //i++ is one row lower
            }
            else if (direction == 3) //when it is needed to go right
            {
                if (j == 9 || walkArray[i][j + 1] != '.') //if it is currently in rightmost position or position already filled with a letter, choose a new direction
                    continue;
                else
                    j++; //j++ is one column right
            }
        }

        character++; //gets to new letter
        walkArray[i][j] = character; //fills in the array point with the new character according to if else statements above with new values

        if (character == 'Z') //when character is Z, loop ends
            break;

    }

    for (i = 0; i < 10; i++) //prints the whole array values
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c ", walkArray[i][j]);
        }
        printf("\n");
    }


    return 0;
}
