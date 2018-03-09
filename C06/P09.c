#include <stdio.h>

int main(void)
{
    float loanAmount, interestRate, monthlyPayment; //defining necessary variables
    int numPayment;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount); //assigns value to the amount of loan

    printf("Enter interest rate: ");
    scanf("%f", &interestRate); //assigns the interest rate

    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment); //assigns the monthly payment amount

    printf("Enter the number of payments: ");
    scanf("%d", &numPayment);

    for (int i = 1; i <= numPayment; i++)
    {
        loanAmount += (loanAmount * (interestRate / 100)) / 12; //increases loan amount due to interest rate
        loanAmount -= monthlyPayment; //decreases the loan amount as per monthly payment amount

        printf("Balance remaining after payment %d: %.2f\n", i, loanAmount);
    }

    return 0;
}
