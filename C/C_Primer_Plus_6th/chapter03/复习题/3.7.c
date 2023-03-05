#include <stdio.h>

int main(void)
{
    float inch_to_cm = 2.54f, User_Height;
    
    printf("输入身高（英寸）：");
    scanf("%f", &User_Height);

    printf("身高(厘米)是：%f\n", User_Height * inch_to_cm);

    return 0;
}

