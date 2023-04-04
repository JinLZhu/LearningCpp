#include <iostream>

int main()
{
    int sum = 0, value = 0;

    std::cout << "请输入一组数字：" << std::endl;
    while(std::cin >> value){
        sum += value;
    }

    std::cout <<"Sum is: " << sum << std::endl;
    return 0;
}
