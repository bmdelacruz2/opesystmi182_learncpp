#include <stdio.h>

int main()
{
    /* Loop counter variable declaration */
    int i, j;

    /* Outer loop */
    for(i=1; i<=10; i++)
    {
        /* Inner loop */
        for(j=1; j<=5; j++)
        {
            printf("%d\t", (i*j));
        }

        /* Print a new line */
        printf("\n");
    }

    return 0;
}
