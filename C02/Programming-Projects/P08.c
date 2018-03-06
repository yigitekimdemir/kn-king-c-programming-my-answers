#include <stdio.h>

int main(void)
{
    float loanAmount, interestRate, monthlyPayment; //defining necessary variables

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount); //assigns value to the amount of loan

    printf("Enter interest rate: ");
    scanf("%f", &interestRate); //assigns the interest rate

    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment); //assigns the monthly payment amount

    loanAmount += (loanAmount * (interestRate / 100)) / 12; //increases loan amount due to interest rate
    loanAmount -= monthlyPayment; //decreases the loan amount as per monthly payment amount

    printf("Balance remaining after first payment: %.2f\n", loanAmount);

    loanAmount += (loanAmount * (interestRate / 100)) / 12;
    loanAmount -= monthlyPayment;

    printf("Balance remaining after second payment: %.2f\n", loanAmount);

    loanAmount += (loanAmount * (interestRate / 100)) / 12;
    loanAmount -= monthlyPayment;

    printf("Balance remaining after third payment: %.2f\n", loanAmount);

    return 0;
}
