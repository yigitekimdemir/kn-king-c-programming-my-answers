#include <stdbool.h>

#ifndef STACK
#define STACK

void MakeEmpty(void);
bool IsEmpty(void);
bool IsFull(void);
void Push(int i);
char Pop(void);
void StackOverflow(void);
void StackUnderflow(void);
#endif // STACK
