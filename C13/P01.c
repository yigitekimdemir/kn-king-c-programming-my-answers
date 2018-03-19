#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20

int main(void)
{
    char smallestWord[MAX_LENGTH+1], largestWord[MAX_LENGTH+1];
    char input[MAX_LENGTH+1];

    while (1)
    {
        printf("Enter word: ");
        gets(input);

        if (strlen(smallestWord) == 0) //fill in smallest word array with a value in the beginning
            strcpy(smallestWord, input);

        if (strlen(largestWord) == 0) //fill in largest word array with a value in the beginning
            strcpy(largestWord, input);

        if (strcmp(input, smallestWord) < 0) //if input is smaller than smallest word current value, replace it with input
            strcpy(smallestWord, input);

        if (strcmp(input, largestWord) > 0) //if input is larger than largest word current value, replace it with input
            strcpy(largestWord, input);

        if (strlen(input) == 4) //when input is 4 characters long, break the loop
            break;
    }

    printf("\nSmallest word: %s\n", smallestWord);
    printf("Largest word: %s\n", largestWord);

    return 0;
}
