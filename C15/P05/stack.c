#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define STACK_SIZE 10

int top = 0;
char stackArray[STACK_SIZE];

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
