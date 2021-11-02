#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],b[10],c[20],m,n,i,j;
    printf("Enter the size of array a :")
    scanf("%d",&m);
    printf("Enter the size of array b :")
    scanf("%d",&n);

    printf("Enter the elements of array a : ");
    for(i=0;i<m;i++)
        scanf("%d",a[i]);

    printf("Enter the elements of array b : ");
    for(j=0;j<n;j++)
        scanf("%d",a[j]);

    i=0;
    j=0;
    while(i<10&&j<10)
    {
        if(a[i]<a[j])
        {
            c[i]=a[i];

        }
    }
    return 0;
}
