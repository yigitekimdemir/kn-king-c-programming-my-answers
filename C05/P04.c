#include <stdio.h>

int main(void)
{
    int windSpeed;

    printf("Enter a wind speed in knots: ");
    scanf("%d", &windSpeed);

    if (windSpeed < 1)
        printf("Calm");
    else if (windSpeed >= 1 && windSpeed <= 3)
        printf("Light air");
    else if (windSpeed >= 4 && windSpeed <= 27)
        printf("Breeze");
    else if (windSpeed >= 28 && windSpeed <= 47)
        printf("Gale");
    else if (windSpeed >= 48 && windSpeed <= 63)
        printf("Storm");
    else if (windSpeed > 63)
        printf("Hurricane");

    return 0;
}
