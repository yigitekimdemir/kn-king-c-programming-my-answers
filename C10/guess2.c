/* Asks user to guess a hidden number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* prototypes */
void InitializeNumberGenerator(void);
int NewSecretNumber(void);
void ReadGuesses(int secretNumber);

int main(void)
{
    char command;
    int secretNumber;

    printf("Guess the secret number between 1 and %d. \n\n", MAX_NUMBER);
    InitializeNumberGenerator();

    do
    {
        secretNumber = NewSecretNumber();
        printf("A new number has been chosen.\n");
        ReadGuesses(secretNumber);
        printf("Play again? (Y/N) ");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y');

    return 0;
}

void InitializeNumberGenerator(void)
{
    srand((unsigned) time(NULL));
}

int NewSecretNumber(void)
{
    return rand() % MAX_NUMBER + 1;
}

void ReadGuesses(int secretNumber)
{
    int guess, numGuesses = 0;

    for (;;)
    {
        numGuesses++;
        printf("Enter guess: ");
        scanf("%d", &guess);

        if (guess == secretNumber)
        {
            printf("You won in %d guesses!\n\n", numGuesses);
            return;
        }
        else if (guess < secretNumber)
            printf("Too low; try again.\n");
        else
            printf("Too high; try again.\n");
    }
}
