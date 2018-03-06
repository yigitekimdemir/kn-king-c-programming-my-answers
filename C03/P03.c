#include <stdio.h>

int main(void)
{
    int prefix, groupIdentifier, publisherCode, itemNumber, checkDigit; //declaration of elements in ISBN number

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit); //assigning the numbers to elements in the code

    /* printf below could be written separately for each element, this version makes the code more condensed, be careful of \n's */

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", prefix, groupIdentifier, publisherCode, itemNumber, checkDigit);

    return 0;
}
