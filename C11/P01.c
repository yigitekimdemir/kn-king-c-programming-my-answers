#include <stdio.h>

void PayAmount (int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int amount, bills_20, bills_10, bills_5, bills_1; //declaring the necessary variables

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    PayAmount(amount, &bills_20, &bills_10, &bills_5, &bills_1);

    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf("$5 bills: %d\n", bills_5);
    printf("$1 bills: %d\n", bills_1);

    return 0;
}

void PayAmount (int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars -= 20 * *twenties;

    *tens = dollars / 10;
    dollars -= 10 * *tens;

    *fives = dollars / 5;
    dollars -= 5 * *fives;

    *ones = dollars / 1;
    dollars -= 1 * *ones;

}
