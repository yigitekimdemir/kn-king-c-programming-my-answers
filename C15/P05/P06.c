#include <stdio.h> //input output
#include <stdlib.h> //exit statement
#include <ctype.h> //required for checking the input
#include <stdbool.h> //required for bool functions
#include "stack.h"

int main(void)
{
    char ch;
    int operand1, operand2;

    do
    {
        printf("Enter an RPN expression: ");

        while (1) //loops until it sees "=" character
        {
            scanf(" %c", &ch);

            if (isdigit(ch))
            {
                ch = (int)(ch - 48); //ASCII code of '0' is 48, so we need -48 and casting into int
                Push((int)ch);
            }
            else if (ch == '=') //gets out of loop
                break;
            else if (ispunct(ch)) //stops pushing to stack if input is an operator
            {
                operand2 = Pop();
                operand1 = Pop();
            }
            else if (isalpha(ch)) //exits program if input is a letter
                exit(0);


            if (ch == '+')
                Push(operand1 + operand2);
            else if (ch == '-')
                Push(operand1 - operand2);
            else if (ch == '*')
                Push(operand1 * operand2);
            else if (ch == '/')
                Push(operand1 / operand2);
        }

        printf("Value of expression: %d\n", Pop()); //prints the only item in the stack
    }
    while (1);

    return 0;
}
