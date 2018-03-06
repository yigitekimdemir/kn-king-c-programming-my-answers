#include <stdio.h>

int main(void)
{

    int itemNumber, month, day, year; //integer variables
    float unitPrice; //unit price should be in float

    printf("Enter item number: ");
    scanf("%d", &itemNumber); //assigning the item number to variable

    printf("Enter unit price: ");
    scanf("%f", &unitPrice); //assigning the unit price to variable

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year); //assigning date elements to their variables

    printf("Item\t\tUnit\t\tPurchase\n"); // \t is for putting space between elements
    printf("\t\tPrice\t\tDate\n"); //first two \t's are for creating the second line from Unit Price
    printf("%d\t\t$%6.2f\t\t%d/%d/%d", itemNumber, unitPrice, month, day, year); //6.2f is for right justifying the number, up to 9999.99

    return 0;
}
