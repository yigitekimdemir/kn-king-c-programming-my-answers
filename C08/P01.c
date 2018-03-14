/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false}, isDigitSeenTwice = false; //added another boolean to check if any repeated numbers appear
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digit(s): "); //must be out of loop to be written once on screen

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            printf("%d ", digit);
            isDigitSeenTwice = true;
        }
        else
        {
            digit_seen[digit] = true;

        }
        n /= 10;
    }

    if (!isDigitSeenTwice) //could be written as isDigitSeenTwice == false, this is to write the message below if no repeated numbers available
        printf("No digits are repeated.");

    return 0;
}
