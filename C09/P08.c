#include <stdio.h> //input output
#include <time.h> //required for random number generator
#include <stdlib.h> //required for random functions
#include <stdbool.h> //required for boolean functions

int RollDice(void); //a function declaration to roll a dice
bool PlayGame(void); //main game function declaration

int main(void)
{
    int winCount = 0, loseCount = 0; //counts wins and losses in the game
    char playOrNot; //for Y or N input to continue or stop the game

    srand((unsigned long) time(NULL)); //starts the random number generator

    printf("Welcome to my awesome craps game! Let's roll the dice!\n");
    printf("The rules are as follows:\n");
    printf("On the first roll, 7 and 11 wins, 2,3 and 12 loses, other number is named as pointer.\n");
    printf("In the next roll, if pointer is rolled, you win. If 7 is rolled, you lose!\n");

    printf("Press Enter to begin!\n");
    getchar(); //actually anything else works to begin the game

    while(1) //runs endlessly until sees break
    {
        if(PlayGame()) //call for the game function if the function returns true
        {
            printf("You win!\n");
            winCount++;
        }
        else
        {
            printf("You lose!\n");
            loseCount++;
        }

        printf("\nPlay again?(y/n) ");
        playOrNot = getchar();

        if (playOrNot == 'y' || playOrNot == 'Y')
        {
            getchar(); //this is required to send \n away
            continue;
        }
        else
            break;
    }

    printf("Wins: %d     Losses: %d\n", winCount, loseCount);
    printf("Thank you for playing the game!\n");

    system("pause"); //just added this so the cmd screen will not close immediately after the game in windows
    return 0;
}

int RollDice(void) //rolls 2 dices and sums their value
{
    int sum;

    sum = rand() % 6 + 1;
    sum += (rand() % 6 + 1);

    return sum;
}

bool PlayGame(void)
{
    int roll;
    int point;

    do //this loop should run only once because it is the first turn
    {
        roll = RollDice(); //get the total of dices and store them into variable
        printf("You rolled: %d\n", roll);

        if (roll == 2 || roll == 3 || roll == 12)
        {
            return false;

        }
        else if (roll == 7 || roll == 11)
        {
            return true;
        }
        else
        {
            point = roll;
            printf("Your point is %d\n", point);
        }
    }
    while(0);

    while(1) //this loop is for subsequent rolls
    {
        roll = RollDice();
        printf("You rolled: %d\n", roll);

        if (roll == 7)
        {
            return false;
        }
        else if (roll == point)
        {
            return true;
        }
    }
}
