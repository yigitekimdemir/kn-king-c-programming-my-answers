#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    //this code works without getting switch expressions outside the else border too
    //but that way it would check cases under all conditions and it is not performance-wise

    if (grade < 0 || grade > 100)
        printf("Thou shalt not pass!");
    else
    {
        grade /= 10;
        switch (grade)
        {
        case 0: case 1: case 2: case 3: case 4: case 5:
        printf("Letter grade: F"); break;
        case 6:
        printf("Letter grade: D"); break;
        case 7:
        printf("Letter grade: C"); break;
        case 8:
        printf("Letter grade: B"); break;
        case 9:
        printf("Letter grade: A"); break;
        case 10:
        printf("Letter grade: A"); break;
        }
    }

    return 0;
}
