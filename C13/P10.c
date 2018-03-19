#include <stdio.h>

#define LENGTH 20

void ReverseName(char *);

int main(void)
{
    char firstNameArray[LENGTH], lastNameArray[LENGTH], fullNameArray[2*LENGTH];

    printf("Enter a first and last name: ");
    scanf("%s %s", firstNameArray, lastNameArray); //separate them to eliminate spaces

    sprintf(fullNameArray, "%s %s", firstNameArray, lastNameArray); //get them together in one array

    ReverseName(fullNameArray); //call the function

    return 0;
}

void ReverseName(char *name)
{
    char surnameArray[LENGTH], firstNameArray[LENGTH]; //we will separate name and surname again

    sscanf(name, "%s %s", firstNameArray, surnameArray); //sscanf is reverse of sprintf

    firstNameArray[1] = '\0'; //program will think array ends after first character

    printf("%s, %s.", surnameArray, firstNameArray); //print the magical results!
}
