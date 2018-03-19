/* Checks planet names */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int StringCompare (char *a, char *b);

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

    int i, j;

    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)
        if (StringCompare(argv[i], planets[j]) == 0)
        {
            printf("%s is a planet %d\n", argv[i], j + 1);
            break;
        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}

int StringCompare (char *a, char *b)
{
    int i;
    for (i = 0; tolower(a[i]) == tolower(b[i]); i++)
        if  (a[i] == '\0')
        return 0;
    return 1;
}
