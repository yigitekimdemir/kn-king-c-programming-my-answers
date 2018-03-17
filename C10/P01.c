#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void MakeEmpty(void);
bool IsEmpty(void);
bool IsFull(void);
void Push(char i);
int Pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char ch;
    bool nestCondition = true;

    printf("Enter parentheses and/or braces: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == '{' || ch == '(')
        {
            Push(ch);
        }
        if (ch == ')' && Pop() != '(')
            nestCondition = false;
        if (ch == '}' && Pop() != '{')
            nestCondition = false;
    }

    if (!IsEmpty())
        nestCondition = false;

    if (nestCondition)
        printf("Parantheses/braces are nested properly\n");
    else
        printf("Parantheses/braces are NOT nested properly\n");

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

void Push(char i)
{
    if (IsFull())
        stack_overflow();
    else
        contents[top++] = i;
}

int Pop(void)
{
    if (IsEmpty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("Stack Overflow!");
    exit(0);
}
void stack_underflow(void)
{
    printf("Parantheses/braces are NOT nested properly\n");
    exit(0);
}
