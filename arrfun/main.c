#include <stdio.h>
#include <stdlib.h>
float largest(float a[],int n)

int main()
{
    float value[4] = {2.5,-4.75,1.2,3.67};
    printf("%f\n",largest(values,4));
    return 0;
}

float largest(float a[],int n)
{
    int i;
    float max;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return max;
}
