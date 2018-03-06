#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, firstTotal, secondTotal, checkDigit;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    //more variables could be used instead of modifying secondTotal but less variables better IMO.

    firstTotal = i2 + i4 + i6 + i8 + i10 + i12;
    secondTotal = i1 + i3 + i5 + i7 + i9 + i11;
    secondTotal = secondTotal + ((firstTotal * 3) - 1); //brackets protect the eyes! :)
    checkDigit = 9 - (secondTotal % 10);

    printf("%d", checkDigit);

    return 0;
}
