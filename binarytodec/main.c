#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int num, rem, b = 1, dec_num = 0;
    printf("Enter the binary number = ");
    scanf(" %ld", &num);

    while(num > 0)
    {
        rem = num % 10;
        dec_num = dec_num + rem * b;
        num = num / 10;
        b = b * 2;
    }
    printf("Decimal number = %ld", dec_num);
    return 0;
}
