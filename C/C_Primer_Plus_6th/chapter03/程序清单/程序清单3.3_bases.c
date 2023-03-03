#include "stdio.h"

int main(void)
{
    int x = 100;
    long y = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n",x, x, x);
    printf("Y is %d.", y);
    return 0;
}