#include <stdio.h> //input output
#include <stdlib.h> //exit statement
#include <ctype.h> //required for checking the input
#include <stdbool.h> //required for bool functions

#define STACK_SIZE 10

int top = 0;
char stackArray[STACK_SIZE];

void MakeEmpty(void);
bool IsEmpty(void);
bool IsFull(void);
void Push(int i);
char Pop(void);
void StackOverflow(void);
void StackUnderflow(void);

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

void MakeEmpty(void)
{
    top = 0;
}

bool IsEmpty(void)
{
    return top == 0;
}

bool IsFull(void)
{
    return top == STACK_SIZE;
}

void Push(int i)
{
    if (IsFull())
        StackOverflow();
    else
        stackArray[top++] = i;
}

char Pop(void)
{
    if (IsEmpty())
        StackUnderflow();
    else
        return stackArray[--top];
}

void StackOverflow(void)
{
    printf("Expression is too complex");
    exit(0);
}
void StackUnderflow(void)
{
    printf("Not enough operands in expression");
    exit(0);
}
