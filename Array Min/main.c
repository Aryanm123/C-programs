#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], i, max;
    printf("Enter the numbers : \n");

    for(i=0; i<10; i++)
    {
        scanf(" %d", &num[i]);
    }

    max = 99999;
    for(i=0; i<10; i++)
    {
        if(num[i]<max)
            max = num[i];
    }
    printf("Minimum = %d", num[i]);

    return 0;
}
