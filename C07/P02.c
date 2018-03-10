/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
    int i, n, j;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar(); //necessary for clearing the first new line character when the number is inputted

    for (i = 1, j = 1; i <= n; i++, j++) //j is for counting up to 24, i cannot be user in this manner because it should not be reduced to 1 again
    {
        printf("%10d%10d\n", i, i*i);

        if (j >= 24)
        {
            printf("Press Enter to continue...");

            while ((ch = getchar()) != '\n') //loops indefinitely unless \n is entered
                ;
            j = 0; //resetting j for another 24 counting
                    //it is assigned 0 because it increases by 1 as soon as loop begins again
        }
    }

    return 0;
}
