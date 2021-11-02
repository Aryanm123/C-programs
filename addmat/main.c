#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, i, j, a[100][100], b[100][100], sum[100][100];

    printf("Enter the number of rows : ");
    scanf(" %d", &r);
    printf("Enter the number of columns : ");
    scanf(" %d", &c);

    printf("Enter the elements of first matrix : \n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
    scanf(" %d", &a[i][j]);

    printf("Enter the elements of second matrix : \n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
    scanf(" %d", &b[i][j]);

    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
           sum[i][j] = a[i][j] + b[i][j];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
