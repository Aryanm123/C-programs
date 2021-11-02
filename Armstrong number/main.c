#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num, rem, sum = 0;
    printf("Enter the number = ");
    scanf(" %d", &n);
    num = n;

    while(n > 0)
    {
        rem = n / 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if(num == sum)
        printf("%d is an armstrong number.", num);
    else
        printf("% is not an armstromg number.", num);
    return 0;
}
