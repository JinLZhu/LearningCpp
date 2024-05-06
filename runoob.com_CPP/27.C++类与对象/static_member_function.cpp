/*
 * 如果把函数成员声明为静态的，就可以把函数与类的任何特定对象独立开来
 * 静态成员即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符::就可以访问
 * 静态成员函数只能访问静态成员数据、其它静态成员函数和类外部的其他函数
 * 静态成员函数有一个类反问，他们不能访问类的this指针
 * 可以使用静态成员函数判断类的某些对象是否被创建
 */
/*
 * 静态成员函数没有this指针，只能访问静态成员（包括静态成员变量和静态成员函数）
 * 普通成员函数有this指针，可以访问类中的任意成员；而静态成员函数没有this指针
 */
#include <iostream>
using namespace std;

class Box
{
    public:
        static int objectCount;
        // 构造函数
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
        static int getCount()
        {
            return objectCount;
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
    // 在创建对象之前输出对象总数
    cout << "Inital Stage Count: " << Box::getCount() << endl;

    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);
    
    // 在创建对象之后输出对象的总数
    cout << "Final Stage Count: " << Box::getCount() << endl;

    return 0;
}
