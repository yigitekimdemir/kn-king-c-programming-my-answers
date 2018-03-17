#include <stdio.h>

void reduce(int numerator, int denominator, int *reducedNumerator, int *reducedDenominator);

int main(void)
{
    int nom, denom; //main variables for user input

    printf("Enter a fraction: ");
    scanf("%d/%d", &nom, &denom);

    reduce(nom, denom, &nom, &denom);

    printf("In lowest terms: %d/%d", nom, denom);

    return 0;
}

void reduce(int numerator, int denominator, int *reducedNumerator, int *reducedDenominator)
{
for(;numerator != 0;) //GCD formula according to Euclid's algorithm
    {
        int remainder;

        remainder = denominator % numerator;
        denominator = numerator;
        numerator = remainder;
    }

    //reducing the nom and denom with GCD
    *reducedNumerator /= denominator;
    *reducedDenominator /= denominator;
}
