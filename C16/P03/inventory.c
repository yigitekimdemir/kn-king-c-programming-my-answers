/* Maintains a parts database (array version) */

#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

int FindPart(int, int, struct part);
void Insert(int *, struct part *);
void Search(int, struct part);
void Update(int, struct part *);
void Print(int, struct part);

int main(void)
{
    struct part
    {
        int number;
        char name[NAME_LEN+1];
        int onHand;
    } inventory[MAX_PARTS];

    char code;
    int numParts = 0; /*number of parts currently stored */

    for (;;)
    {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n'); //skips to end of line

        switch (code)
        {
        case 'i':
            Insert(&numParts, &inventory);
            break;
        case 's':
            Search(numParts, inventory);
            break;
        case 'u':
            Update(numParts, &inventory);
            break;
        case 'p':
            Print(numParts, inventory);
            break;
        case 'q':
            return 0;
        default:
            printf("Illegal code\n");
        }
        printf("\n");
    }
}

int FindPart(int number, int numParts, struct part inventory)
{
    int i;

    for (i = 0; i < numParts; i++)
        if (inventory[i].number == number)
            return i;
    return -1;
}

void Insert(int *numParts, struct part *inventory)
{
    int partNumber;

    if (*numParts == MAX_PARTS)
    {
        printf("Database is full; can't add more parts.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &partNumber);

    if (FindPart(partNumber, *numParts) >= 0)
    {
        printf("Part already exists.\n");
        return;
    }

    inventory[*numParts].number = partNumber;
    printf("Enter part name: ");
    ReadLine(inventory[*numParts].name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[*numParts].onHand);
    (*numParts)++;
}

void Search(int numParts, struct part inventory)
{
    int i, number;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = FindPart(number, numParts, inventory);
    if (i >= 0)
    {
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].onHand);
    }
    else
        printf("Part not found.\n");
}

void Update(int numParts, struct part *inventory)
{
    int i, number, change;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = FindPart(number, numParts, *inventory);
    if (i >= 0)
    {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        *inventory[i].onHand += change;
    }
    else
        printf("Part not found.\n");
}

void Print(int numParts, struct part inventory)
{
    int i;

    printf("Part Number     Part Name               "
           "Quantity on Hand\n");
    for (i = 0; i < numParts; i++)
        printf("%7d          %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].onHand);
}
