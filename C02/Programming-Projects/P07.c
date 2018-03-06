#include <stdio.h>

int main(void)
{
    int amount, bills_20, bills_10, bills_5, bills_1; //declaring the necessary variables

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    bills_20 = amount / 20; //calculating 20 bills amount
    amount -= 20 * bills_20; //total amount minus total of 20 bills

    printf("$20 bills: %d\n", bills_20);

    bills_10 = amount / 10; //calculating 10 bills amount
    amount -= 10 * bills_10; //total amount minus total of 10 bills

    printf("$10 bills: %d\n", bills_10);

    bills_5 = amount / 5; //calculating 5 bills amount
    amount -= 5 * bills_5; //total amount minus total of 5 bills

    printf("$5 bills: %d\n", bills_5);

    bills_1 = amount / 1; //calculating 1 bills amount
    amount -= 1 * bills_1; //total amount minus total of 1 bills

    printf("$1 bills: %d\n", bills_1);

    return 0;
}
