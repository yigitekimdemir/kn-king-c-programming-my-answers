#include <stdio.h>

int main(void)
{
    printf("%zd\n", sizeof(int));
    printf("%zd\n", sizeof(short));
    printf("%zd\n", sizeof(long));
    printf("%zd\n", sizeof(float));
    printf("%zd\n", sizeof(double));
    printf("%zd\n", sizeof(long double));

    return 0;
}

/* though the author of the book says printf cannot print
the sizeof values without adding "z" to its command for C99,
it actually does that correctly. May be something about
gcc compiler. I added that anyway. */
