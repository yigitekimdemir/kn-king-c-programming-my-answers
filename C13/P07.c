#include <stdio.h>

int main(void)
{
    char *underTwenty[] = {"ten.", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *overTwentyTens[] = {"twenty-", "thirty-", "forty-", "fifty-", "sixty-", "seventy-", "eighty-", "ninety-"};
    char *overTwentyOnes[] = {"one.", "two.", "three.", "four.", "five.", "six.", "seven.", "eight.", "nine."};
    int tens, ones;

    printf("Enter a two digit number: ");
    scanf("%1d%1d", &tens, &ones);

    printf("You entered the number ");

    if (tens == 1)
    {
        printf("%s", underTwenty[ones]);
    }
    else
    {
        printf("%s", overTwentyTens[tens-2]);

        printf("%s", overTwentyOnes[ones-1]);
    }

    return 0;
}
