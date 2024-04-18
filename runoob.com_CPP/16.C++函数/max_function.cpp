#include <iostream>
#include <memory>
#include <regex>
using namespace std;

int max(int num1, int num2);

int main()
{
    //局部变量声明
    int a = 100;
    int b = 200;
    int ret;

    ret = max(a, b);

    cout << "Max value is: " << ret << endl;
    
    return 0;
}

//函数返回两个数中较大的那个数
int max(int num1, int num2)
{
    //局部变量声明
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}
