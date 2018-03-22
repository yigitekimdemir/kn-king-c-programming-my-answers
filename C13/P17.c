#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define ARRAY_SIZE 30

char sentenceArray[ARRAY_SIZE] = {false};

bool IsPalindrome(const char *message);

int main(void)
{
    printf("Enter a message: ");
    gets(sentenceArray);

    if (IsPalindrome(sentenceArray))
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}

bool IsPalindrome(const char *message)
{
    const char *p = message;
    const char *q = message;

    for (; *(q+1) != '\0'; q++); //this gets the second pointer to last letter of the string

    while (1)
    {
        if (*p == ' ') //to skip whitespace
            p++;

        if (*q == ' ') //to skip whitespace
            q--;

        if (*p == *q) //loop goes on until two letters are no longer same which indicates that pointers crossed each other
        {
            p++;
            q--;
            continue;
        }

        if (p == q || p > q) //sometimes pointers does not meet and just cross each other
            return true;

        if (*p != *q) //anytime loop sees a not match, it will get out and send false signal
            return false;

    }
}
