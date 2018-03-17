#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

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

void push(int i)
{
    if (IsFull())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (IsEmpty())
        stack_underflow();
    else
        return contents[--top];
}

void StackOverflow(void);
{
    exit(0);
}
void StackUnderflow(void);
{
    exit(0);
}
