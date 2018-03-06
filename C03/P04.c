#include <stdio.h>

int main(void)
{
    int areaCode, num1, num2; //variables necessary for recording the number

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &areaCode, &num1, &num2); //be careful of the input formatting

    printf("You entered %d.%d.%d", areaCode, num1, num2); //printing the result on screen, be careful of formatting

    return 0;
}
