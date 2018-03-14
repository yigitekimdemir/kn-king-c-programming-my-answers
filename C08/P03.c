/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false}, isSeenTwice = false;
    int digit;
    long n;

    for(;;) //loops until user enters 0
    {
        printf("Enter a number (0 to terminate): ");
        scanf("%ld", &n);

        if(n == 0) //user enters 0 and program terminates
            break;

        while (n > 0)
        {
            digit = n % 10;
            if (digit_seen[digit])
                isSeenTwice = true; //used  in the if statement below

            digit_seen[digit] = true;
            n /= 10;
        }


        if (isSeenTwice)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");

        for (int i = 0; i < 9; i++)
            digit_seen[i] = false; //prepares the loop for new number check

        isSeenTwice = false; //needs this reset too

    }

    return 0;
}
