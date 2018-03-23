/* Maintains a parts database (array version) */

#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part
{
    int number;
    char name[NAME_LEN+1];
    int onHand;
    int price;
}inventory[MAX_PARTS];

int numParts = 0; /*number of parts currently stored */

int FindPart(int number);
void Insert(void);
void Search(void);
void Update(void);
void Print(void);

int main(void)
{
    char code;

    for (;;)
    {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n'); //skips to end of line

        switch (code)
        {
        case 'i': Insert(); break;
        case 's': Search(); break;
        case 'u': Update(); break;
        case 'p': Print(); break;
        case 'q': return 0;
        default: printf("Illegal code\n");
        }
        printf("\n");
    }
}

int FindPart(int number)
{
    int i;

    for (i = 0; i < numParts; i++)
        if (inventory[i].number == number)
            return i;
    return -1;
}

void Insert(void)
{
    int partNumber;

    if (numParts == MAX_PARTS)
    {
        printf("Database is full; can't add more parts.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &partNumber);

    if (FindPart(partNumber) >= 0)
    {
        printf("Part already exists.\n");
        return;
    }

    inventory[numParts].number = partNumber;
    printf("Enter part name: ");
    ReadLine(inventory[numParts].name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[numParts].onHand);
    printf("Enter price of the item: $");
    scanf("%d", &inventory[numParts].price);
    numParts++;
}

void Search(void)
{
    int i, number;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = FindPart(number);
    if (i >= 0)
    {
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].onHand);
        printf("Price of the part: $%d\n", inventory[i].price);
    }
    else
        printf("Part not found.\n");
}

void Update(void)
{
    int i, number, change;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = FindPart(number);
    if (i >= 0)
    {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].onHand += change;
    }
    else
        printf("Part not found.\n");
}

void Print(void)
{
    int i;

    printf("Part Number     Part Name               "
           "Quantity on Hand          Price of Item\n");
    for (i = 0; i < numParts; i++)
        printf("%7d     %-25s%11d%20d$\n", inventory[i].number, inventory[i].name, inventory[i].onHand, inventory[i].price);
}
