#include <iostream>
int main()
{
    /* 
     * 不正确的嵌套注释程序
     /*
       明知山有虎
      * /
     * 观察编译器返回的错误
     */
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0;
    int v2 = 0;

    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The sum of " << std::endl;
    std::cout << v1 << std::endl;
    std::cout << " and " << std::endl;
    std::cout << v2 << std::endl;
    std::cout << " is " << std::endl;
    std::cout << v1 + v2 << std::endl;

    return 0;
}

