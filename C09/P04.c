#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 26

void ReadWord(int []);
bool EqualArray(int [], int [N]);

int main(void)
{
    int firstWordArray[N] = {0}, secondWordArray[N] = {0};

    printf("Enter first word: ");
    ReadWord(firstWordArray);

    printf("Enter second word: ");
    ReadWord(secondWordArray);

    printf("%d", EqualArray(firstWordArray, secondWordArray));

    return 0;
}

void ReadWord(int x[])
{
    while(1)
    {
        char ch = getchar();

        if (isalpha(ch)) //skips non alphanumeric characters
            ch = tolower(ch); //converts all to lowercase letters
        else if (ch == '\n') //skips new line
            break;
        else
            continue;

        x[(int)(ch%97)] += 1; //'a' is 97 in ASCII table, remainder from 97 makes the 'a' increase [0] index and other letters too
    }
}

bool EqualArray(int x[], int y[N])
{
    int checkArray[N], checkCharacter;

    for (int i = 0; i < N; i++)
        checkArray[i] = x[i] - y[i]; //this part is different from the original C08P16 formula because here we must only use 1 formula

    for (int i = 0; i < N; i++)
    {
        checkCharacter = checkArray[i];
        if (checkCharacter < 0 || checkCharacter > 0) //if it sees a value under 0 or above 0, stops checking other letters and prints immediately
        {
            return false;
        }
        else
            return true;
    }
}
