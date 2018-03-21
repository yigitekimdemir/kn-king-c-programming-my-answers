#include <stdio.h>
#include <string.h>
#include <stdbool.h> //prefer to use false and true instead of 0 and 1

bool AreAnagrams(const char *word1, const char *word2);

int main(void)
{
    char firstWordArray[26] = {'\0'}, secondWordArray[26] = {'\0'}; //fill in all array with NULL at the beginning

    printf("Enter first word: ");
    scanf("%s", firstWordArray);

    printf("Enter second word: ");
    scanf("%s", secondWordArray);

    if (AreAnagrams(firstWordArray, secondWordArray))
        printf("The words are anagrams.");
    else
        printf("The words are not anagrams");

    return 0;
}

bool AreAnagrams(const char *word1, const char *word2)
{
    int sum1 = 0 ,sum2 = 0; //we will calculate the int values of each string to compare

    while (*word1 != '\0')
    {
        sum1 = (int)*word1 + sum1; //short written version does not work (+=) because casting must be in the first argument
        word1++; //word1 is a pointer so we can directly increase its address for the next value in array
    }

    while (*word2 != '\0')
    {
        sum2 = (int)*word2 + sum2;
        word2++;
    }

    if (sum1 == sum2)
        return true;
    else
        return false;
}
