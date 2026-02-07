#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    // 不合法, 输出运算符“<<"前应加入std::cout

    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;

    return 0;
}