#include <stdio.h>

int main(void)
{
    float amount; //user should define the beginning amount

    printf("Enter an amount: ");
    scanf("%f", &amount); //assign user input to amount

    amount += amount * (5.0f/100.0f); //adding 5 percent of amount to the original amount value

    printf("With tax added: %.2f", amount); //printing results

    return 0;
}
