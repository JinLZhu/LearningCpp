#include <stdio.h>

int main(void)
{
    long seconds_in_year = 3.156e7;
    int user_age = 0;

    printf("输入年龄：");
    scanf("%d", &user_age);

    printf("年龄转换秒约为：%Ld\n", user_age * seconds_in_year);
    return 0;
}
