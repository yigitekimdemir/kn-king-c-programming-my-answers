#include <stdio.h>

#define N 50

double ComputeAverageWordLength(const char *sentence); //function prototype

int main(void)
{
    char inputArray[N]; //array to contain all strings

    printf("Enter a sentence: ");

    gets(inputArray); //records the input

    printf("%.2f", ComputeAverageWordLength(inputArray));

    return 0;
}

double ComputeAverageWordLength(const char *sentence)
{
    int wordCounter = 1, charCounter = 0;
    double average = 0;

    for (const char *p = sentence; *p != '\0'; p++) //continues until sees \0
    {
        if (*p == ' ')
            wordCounter++; //each space increases word count by 1
    }

    for (const char *p = sentence; *p != '\0'; p++)
    {
        if (*p != ' ')
            charCounter++; //reads all except spaces
    }

    return average = (double)charCounter/wordCounter; //casting to double is required for correct calculation
}
