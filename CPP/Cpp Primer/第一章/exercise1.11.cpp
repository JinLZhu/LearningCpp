#include <iostream>
int main()
{
    int num1 = 0, num2 = 0;

    std::cout << "请输入两个数字：" << std::endl;
    std::cin >> num1;
    std::cin >> num2;

    if (num1 > num2){
        while (num2 <= num1){
            std::cout << num1 << std::endl;
            num1--;
        }
    }else if(num1 < num2){
        while (num1 <= num2){
            std::cout << num1 << std::endl;
            num1++;
        }
    }else if(num1 == num2){
        std::cout << "它们相等哦！" << std::endl;
    }

    return 0;
}

