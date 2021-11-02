#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10], sum = 0, i;
    float avg ;

    printf("Enter the number :\n");
    for(i=0; i<10; i++)
    {
        scanf(" %d", &n[i]);
        sum = sum + n[i];
    }

    avg = sum/10;
    printf("The average of 10 numbers is : %f", avg);
    return 0;
}
