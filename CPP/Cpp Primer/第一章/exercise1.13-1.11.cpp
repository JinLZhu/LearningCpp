#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "请输入两个数字" << std::endl;
    std::cin >> num1;
    std::cin >> num2;

    if (num1 > num2){
        for (num1; num2 < num1; num1--)
            std::cout << num1 << std::endl;
    }else if (num1 < num2){
        for (num1; num2 > num1; num1++)
            std::cout << num1 << std::endl;
    }else if(num1 == num2){
        std::cout << "两数相等！" << std::endl;
    }

    return 0;
}
