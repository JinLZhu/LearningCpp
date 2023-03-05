#include <stdio.h>

int main(void)
{
    char char_Userinput;
    printf("输入一个ASCII码值：");
    scanf("%d", &char_Userinput);

    printf("输入的数字为：%d。\n", char_Userinput);
    printf("字符对应的ASCII码为：%c。\n", char_Userinput);


    return 0;
}

