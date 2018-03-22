#include <stdio.h> //input output
#include <stdlib.h> //exit statement
#include <ctype.h> //required for checking the input
#include <stdbool.h> //required for bool functions

#define STACK_SIZE 10

int top = 0;
char stackArray[STACK_SIZE];

int EvaluateRpnExpression(const char *expression);

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


        printf("Enter an RPN expression: ");

        gets(stackArray);

        printf("Value of expression: %d\n", EvaluateRpnExpression(stackArray)); //prints the only item in the stack


    return 0;
}

int EvaluateRpnExpression(const char *expression)
{

    char *p = stackArray;
    int operand1, operand2;

    for (; ; p++)
        {

            if (isdigit(*p))
            {
                Push(*p - '0');
            }
            else if (*p == ' ')
                continue;
            else if (*p == '=') //gets out of loop
                return Pop();
            else if (ispunct(*p)) //stops pushing to stack if input is an operator
            {
                operand2 = Pop();
                operand1 = Pop();
            }
            else if (isalpha(*p)) //exits program if input is a letter
                exit(0);


            if (*p == '+')
                Push(operand1 + operand2);
            else if (*p == '-')
                Push(operand1 - operand2);
            else if (*p == '*')
                Push(operand1 * operand2);
            else if (*p == '/')
                Push(operand1 / operand2);
        }



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
