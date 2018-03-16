#include <stdio.h>

#define N 5 //length of array

void Selection_Sort(int x[], int y); //function declaration

int main(void)
{
    int inputArray[N]; //variable sized array to store user input

    printf("Enter %d integers: ", N);

    for (int i = 0; i < N; i++) //fill the array with input from user
    {
        scanf("%d", &inputArray[i]);
    }

    Selection_Sort(inputArray, N); //it calls the sorting function

    for (int i = 0; i < N; i++)
        printf("%d", inputArray[i]);

    return 0;
}

void Selection_Sort(int x[], int y) //sorting function definition
{
    int comparison = 0, comparisonTemp = 0, j; //comparison variables are to compare values in array, j is for storing the position of biggest value

    if (y != 0) //must be added to quit the function when recursion ends
    {
        for (int i = 0; i < y; i++)
        {
            comparisonTemp = x[i];

            if (comparisonTemp > comparison)
            {
                comparison = comparisonTemp;
                j = i; //store the position to j because below we will use it
            }
            else
                continue; //could be skipped but i like to add else statements
        }
    }
    else
        return; //when y == 0, it returns to the position it is called

    x[j] = x[y-1]; //the last value in array is saved to position of biggest value
    x[y-1] = comparison; //then biggest value is moved to last position in array

    Selection_Sort(x, y-1); //calls itself recursively

}
