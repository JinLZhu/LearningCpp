#include <stdio.h>

int main(void)
{
    float f_num;

    printf("Enter a floating-point value: ");
    scanf("%f", &f_num);

    printf("fixed-point notation: %.6f.\n", f_num);
    printf("exponential notation: %e.\n", f_num);
    printf("p notation: %a.\n", f_num);

    return 0;
}
