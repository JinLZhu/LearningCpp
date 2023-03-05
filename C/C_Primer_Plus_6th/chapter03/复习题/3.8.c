#include <stdio.h>

int main(void)
{
    float pint, ounce, spoon, teaspoon, User_Cups;

    printf("输入杯数量：");
    scanf("%f", &User_Cups);

    pint = User_Cups / 2;
    ounce = User_Cups * 8;
    spoon = ounce * 2;
    teaspoon = spoon * 3;

    printf(" %f 杯约等于 %f 品脱\n", User_Cups, pint);
    printf(" %f 杯约等于 %f 盎司\n", User_Cups, ounce);
    printf(" %f 杯约等于 %f 汤勺\n", User_Cups, spoon);
    printf(" %f 杯约等于 %f 茶勺\n", User_Cups, teaspoon);

    return 0;
}
