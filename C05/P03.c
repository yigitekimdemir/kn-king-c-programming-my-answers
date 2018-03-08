/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    float commissionOriginal, commissionRival, value;
    int numberShare, priceShare; //will be converted to float in calculation anyway

    printf("Enter number of shares: ");
    scanf("%d", &numberShare);

    printf("Enter price per share: ");
    scanf("%d", &priceShare);

    value = numberShare * priceShare; //necessary for original broker calculations, the returning value will be converted to float

    if (value < 2500.00f)
        commissionOriginal = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commissionOriginal = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commissionOriginal = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commissionOriginal = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commissionOriginal = 155.00f + .0011f * value;
    else
        commissionOriginal = 255.00f + .0009f * value;

    if (commissionOriginal < 39.00f)
        commissionOriginal = 39.00f;

    printf("Commission for original broker is: $%.2f\n", commissionOriginal);

    //rival broker calculations below

    if (numberShare < 2000)
        commissionRival = 33.00f + .03f * numberShare;
    else if (numberShare >= 2000)
        commissionRival = 33.00f + .02f * numberShare;

    printf("Commission for rival broker is: $%.2f\n", commissionRival); //this guy is a poor bastard :P

    return 0;
}
