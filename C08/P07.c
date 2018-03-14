#include <stdio.h>

int main(void)
{
    int numberArray[5][5];
    int rowTotals = 0, columnTotals = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i+1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &numberArray[i][j]);  //assign all values to array
        }
    }

    printf("Row totals: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            rowTotals += numberArray[i][j]; //keep row stable in each inner loop and sum values
        }
        printf("%d ", rowTotals);
        rowTotals = 0; //must be added for beginning the other rows
    }

    printf("\nColumn totals: ");
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            columnTotals += numberArray[i][j]; //keep column stable and sum values
        }
        printf("%d ", columnTotals);
        columnTotals = 0; //must be added for beginning the other columns
    }

    return 0;
}
