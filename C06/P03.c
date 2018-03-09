#include <stdio.h>

int main(void)
{
    int nom, denom; //main variables for user input

    printf("Enter a fraction: ");
    scanf("%d/%d", &nom, &denom);

    int nomTemp = nom, denomTemp = denom, remainder; //temporary variables for calculations in loop

    for(;nomTemp != 0;) //GCD formula according to Euclid's algorithm
    {
        remainder = denomTemp % nomTemp;
        denomTemp = nomTemp;
        nomTemp = remainder;
    }

    //reducing the nom and denom with GCD
    nom /= denomTemp;
    denom /= denomTemp;

    printf("In lowest terms: %d/%d", nom, denom);

    return 0;
}
