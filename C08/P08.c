#include <stdio.h>

#define N 5 //array size

int main(void)
{
    int numberArray[N][N]; //5*5 array declaration
    int totalScore = 0, quizScore = 0, highScore = 0, lowScore = 100; //0 and 100 for high and low scores in beginning because of comparison in if statements

    for (int i = 0; i < N; i++)
    {
        printf("Enter student %d results: ", i+1); //each row is a student
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &numberArray[i][j]);  //assign all values to array
        }
    }

    printf("\n");

    for (int i = 0; i < N; i++)
    {
        printf("Total score for student %d: ", i+1);
        for (int j = 0; j < N; j++)
        {
            totalScore += numberArray[i][j]; //calculating total score for a student
        }
        printf("%d\n", totalScore);
        printf("Average score for student %d: %d\n\n", i+1, totalScore/N); //average score is sum of score / number of exams
        totalScore = 0;
    }

    for (int j = 0; j < N; j++)
    {
        printf("Average score of quiz %d: ", j+1);
        for (int i = 0; i < N; i++)
        {
            quizScore += numberArray[i][j]; //total score of a quiz
            if (numberArray[i][j] > highScore)
                highScore = numberArray[i][j];

            if (numberArray[i][j] < lowScore)
                lowScore = numberArray[i][j];
        }
        printf("%d\n", quizScore/5); //average of that quiz's scores
        quizScore = 0;
        printf("High score of quiz %d: %d\n", j+1, highScore);
        highScore = 0;
        printf("Low score of quiz %d: %d\n\n", j+1, lowScore);
        lowScore = 100;
    }

    return 0;
}
