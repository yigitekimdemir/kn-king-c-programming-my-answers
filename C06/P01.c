//if you wish to compile the code, please delete one of the two alternative loops below and then compile

#include <stdio.h>

int main(void)
{
    float number = 0.0f, i; //made number 0.0f at the beginning, i think it is better to get accustomed to that practice

    for(;;) //i like to use "for" over "while" loops even though "while" is sometimes shorter variant
    {
        printf("Enter a number: ");
        scanf("%f", &i);

        if (i > number)
            number = i;
        else if (i == 0)
            break;
    }

    //"while" version of the same loop

    while(i != 0)
    {
        printf("Enter a number: ");
        scanf("%f", &i);

        if (i > number)
            number = i;
    }

    printf("The largest number entered was %.2f", number);

    return 0;
}
