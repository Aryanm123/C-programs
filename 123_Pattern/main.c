#include <stdio.h>
#include <stdlib.h>

int main()
{
     int rows, i, j;
    printf("Enter the number of rows to print = ");
    scanf(" %d", &rows);

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
    return 0;
}
