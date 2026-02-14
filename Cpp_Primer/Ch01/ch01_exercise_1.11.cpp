#include <iostream>

int main()
{
    int num1 = 0, num2 = 0;
    std::cout << "Please input two numbers :" << std::endl;
    std::cin >> num1 >> num2;

    while (num1 < (num2-1))
    {
        num1++;
        std::cout << num1 << std::endl; 
    }

    return 0;
}