#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int firstWordArray[26] = {0}, secondWordArray[26] = {0}, checkCharacter;
    int checkArray[26] = {0};
    char ch;

    printf("Enter first word: ");

    for(;;)
    {
        ch = getchar();

        if (isalpha(ch)) //skips non alphanumeric characters
            ch = tolower(ch); //converts all to lowercase letters
        else if (ch == '\n') //skips new line
            break;
        else
            continue;

        firstWordArray[(int)(ch%97)] += 1; //'a' is 97 in ASCII table, remainder from 97 makes the 'a' increase [0] index and other letters too
    }

    printf("Enter second word: ");

    for(;;)
    {
        ch = getchar();

        if (isalpha(ch))
            ch = tolower(ch);
        else if (ch == '\n')
            break;
        else
            continue;

        secondWordArray[(int)(ch%97)] -= 1;
    }

    for (int i = 0; i < 26; i++)
        checkArray[i] = firstWordArray[i] + secondWordArray[i]; //totaling array values

    for (int i = 0; i < 26; i++)
    {
        checkCharacter = checkArray[i];
        if (checkCharacter < 0) //if it sees a value under 0, stops checking other letters and prints immediately
        {
            printf("The words are not anagrams.");
            break;
        }
    }

    if (checkCharacter == 0) //last value of checkCharacter is 0 if all values in array are 0
    printf("The words are anagrams.");

    return 0;
}
