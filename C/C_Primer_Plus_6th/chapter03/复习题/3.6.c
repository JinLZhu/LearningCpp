#include <stdio.h>

int main(void)
{
    double Quality_Of_Water = 3.0e-23;
    int Gram_Of_Water = 950, User_Input;
    printf("输入夸脱数量：");
    scanf("%d", &User_Input);
    printf(" %d 夸脱水约有水分子 %ld 个。\n", User_Input,  
            (Gram_Of_Water / Quality_Of_Water) * User_Input);

    return 0;
}
