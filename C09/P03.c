/* This project not works sometimes, just gives a blank screen rarely
if you have any idea why that happens, please make me aware because
I cannot see any flaws in the program */

/* This project fills a 10x10 table with letters from A to Z
in a random walk */

#include <stdio.h>
#include <time.h> //needed for getting time values to be used in number generation
#include <stdlib.h> //needed for srand and rand function to generate random numbers

#define N 10

void GenerateRandomWalk(char [][N]);
void PrintArray(char [][N]);

int main(void)
{
    char walkArray[N][N];

    GenerateRandomWalk(walkArray);

    PrintArray(walkArray);

    return 0;
}

void GenerateRandomWalk(char x[][N])
{
    for (int i = 0; i < N; i++) //fill in '.' to all array elements
    {
        for (int j = 0; j < N; j++)
            x[i][j] = '.';
    }

    srand((unsigned) time(NULL)); //initialize random number generator
    int i = 0, j = 0, direction;
    char character = 'A';

    x[i][j] = character; //0.0 position is 'A', which is beginning of the walk

    for(;;) //loops until break kicks in
    {
        direction = rand() % 4; //0 is up, 2 is down, 1 is left, 3 is right direction

        //when surrounded with letters in 4 sides, loop stops
        if (x[i - 1][j] != '.' && x[i][j - 1] != '.' && x[i + 1][j] != '.' && x[i][j + 1] != '.')
        {
            break;
        }
        else
        {

            if (direction == 0) //when it is needed to go up
            {
                if (i == 0 || x[i - 1][j] != '.') //if it is currently in uppermost position or position already filled with a letter, choose a new direction
                    continue;
                else
                    i--; //i-- is one row higher
            }
            else if (direction == 1) //when it is needed to go left
            {
                if (j == 0 || x[i][j-1] != '.') //if it is currently in leftmost position or position already filled with a letter, choose a new direction
                    continue;
                else
                    j--; //j-- is one column left
            }
            else if (direction == 2) //when it is needed to go down
            {
                if (i == 9 || x[i + 1][j] != '.') //if it is currently in lowest position or position already filled with a letter, choose a new direction
                    continue;
                else
                    i++; //i++ is one row lower
            }
            else if (direction == 3) //when it is needed to go right
            {
                if (j == 9 || x[i][j + 1] != '.') //if it is currently in rightmost position or position already filled with a letter, choose a new direction
                    continue;
                else
                    j++; //j++ is one column right
            }
        }

        character++; //gets to new letter
        x[i][j] = character; //fills in the array point with the new character according to if else statements above with new values

        if (character == 'Z') //when character is Z, loop ends
            break;
    }
}

PrintArray(char x[][N])
{
    for (int i = 0; i < N; i++) //prints the whole array values
    {
        for (int j = 0; j < N; j++)
        {
            printf("%c ", x[i][j]);
        }
        printf("\n");
    }
}
