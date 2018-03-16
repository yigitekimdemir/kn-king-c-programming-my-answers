#include <stdio.h>
#include <stdbool.h> //to use true false statements

/* be careful that sometimes i used i and j as local variables, sometimes as global variables */

void CreateMagicSquare(int n, char [][*]);
void PrintMagicSquare(int n, char [][*]);

int main(void)
{
    int n; //assign the first number as 1

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char magicSquare[n][n]; //array declaration based on user input

    CreateMagicSquare(n, magicSquare);

    PrintMagicSquare(n, magicSquare);

    return 0;
}

void CreateMagicSquare(int n, char x[][n])
{
    for (int i = 0; i < n; i++) //set all array values to false
    {
        for (int j = 0; j < n; j++)
            x[i][j] = false;
    }

    int j = n/2; //initial position of '1'
    int i = 0;
    int nextNumber = 1;

    x[i][j] = nextNumber; //setting the number '1' into its place to begin the software

    for (;;) //loops until break kicks in
    {
        if (i == 0) //if row is uppermost, need to wrap down
            i = n - 1; //so i put it on the last row
        else
            i--; //if row is not uppermost one, it can move up

        if (j == n-1) //if column is the last one, it needs to wrap left
            j = 0; //so i put it on the first column
        else
            j++; //if column is not the last one, it can move right

        nextNumber++; //increase '1' to continue with next values

        if (x[i][j] == false) //if the place number needs to go is free
        {
            x[i][j] = nextNumber; //put it there
        }
        else if (x[i][j] != false) //if the place number needs to go is not free

            /* things got a little bit complicated from here
            * i don't know if the algorithm could be something less cryptic
            * but i can only think of this way to solve this problem */

            /* first if statement below was necessary just because
            algorithm stops working when the last number was in
            right top corner and next place in array was already
            filled with a number, so i needed to bypass
            that problem and move the number to its correct place */

        {
            if (i == n-1 && j == 0)
            {
                i = 1;
                j = n-1;
            }
            else //if next place is filled in, move it right down the last number with the formula below
            {
                i += 2;
                j--;
            }

            x[i][j] = nextNumber; //at last!
        }

        if (nextNumber == n*n) //stops when numbers fill all the square
            break;
    }
}

void PrintMagicSquare(int n, char x[][n])
{
    for (int k = 0; k < n; k++) //lets print the magic square
    {
        for (int m = 0; m <= n; m++)
        {
            if (m == n) //needs to create new line every n columns
            {
                printf("\n");
                break;
            }
            else
                printf("%4d ", x[k][m]);
        }
    }
}
