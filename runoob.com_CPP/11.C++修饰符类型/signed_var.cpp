#include <iostream>
using namespace std;
/*
 * 这个程序演示了有符号整数和无符号整数之间的差别
 */

void example_function() {
    static int count = 0;//static关键字使变量count存储在程序生命周期内都存在
    count++;
}

void example_fuction2(register int num) {
    //register关键字建议编译器将变量num存储在寄存器中
    //以提高程序执行速度
    //但是实际上是否会存储在寄存器中由编译器决定
}

int main()
{
    short int i;//有符号短整数
    short unsigned int j;//无符号短整数

    j = 50000;
    i = j;

    cout << i << "  " << j;

    const int NUM = 10;//定义常量NUM,其值不可修改
    const int* ptr = &NUM;//定义指向常量的指针，指针所指的值不可修改
    int const* ptr2 = &NUM;//和上面一行等价

    volatile int num = 20;//定义变量num,其值可能会在未知的时间被改变

    class Example {
    public:
        int get_value() const {
            return value_;//const关键字表示该成员函数不会修改对象中的数据成员
        }
        void set_value(int value) const {
            value_ = value;//mutable关键字允许在const成员函数中修改成员变量
        }

    private:
        mutable int value_;
    }

    return 0;
}
