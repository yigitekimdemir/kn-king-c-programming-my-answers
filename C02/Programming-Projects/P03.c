#include <stdio.h>

int main(void)
{

    int radius, pi = 3.14f, area; //variables

    printf("Please enter radius: ");
    scanf("%d", &radius); //user decides the radius

    area = 4.0f/3.0f * pi * radius * radius * radius; //calculating area formula

    printf("%d", area);

    return 0;
}
