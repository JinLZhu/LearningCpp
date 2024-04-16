#include <iostream>

//函数声明
void func(void);

static int count = 10; /*全局变量*/

int main()
{
    {
        //auto存储类
        auto f=3.14;    //double
        auto s("Hello"); //const char*
        auto z = new auto(9); //int*
        //auto x1 = 5, x2 = 5.0, x3='r';//错误，必须是初始化为同一类型
    }

    {
        //register存储类
        register int miles;
    }

    while(count--)
    {
        func();
    }
    return 0;
}
//函数定义
void func(void)
{
    static int i = 5;//局部静态变量
    i++;
    std::cout << "变量i为 " << i;
    std::cout << " ,变量count为 " << count << std::endl;
}
