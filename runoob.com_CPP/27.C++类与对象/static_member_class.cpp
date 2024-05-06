/*
 * 可以使用static关键字来把类成员定义为静态的。
 * 当声明类成员为静态时，则无论创建多少个类的对象
 * 静态成员都只有一个副本
 * 静态成员在类的所有对象中是共享的
 * 如果不存在其他的初始化语句，在创建第一个对象是，所有静态数据都会被初始化为零
 * 不能把静态成员的初始化放置在类的定义中，但可以在类的外部通过使用范围解析运算符::来重新声明静态变量从而对它进行初始化
 */
#include <iostream>
using namespace std;

class Box
{
    public:
        static int objectCount;
        // 构造函数定义
        Box(double l=2.0, double b=2.0, double h=2.0)
        {
            cout << "Constructor called." << endl;
            length = l;
            breadth = b;
            height = h;
            // 每次创建对象时增加1
            objectCount++;
        }
        double Volume()
        {
            return length * breadth * height;
        }
    private:
        double length;
        double breadth;
        double height;
};

// 初始化类Box的静态成员
int Box::objectCount = 0;

int main(void)
{
    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);

    // 输出对象的总数
    cout << "Total objects: " << Box::objectCount << endl;

    return 0;
}
