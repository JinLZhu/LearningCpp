#include <iostream>
#include <memory>
using namespace std;
/*
 * 接口是使用抽象类实现的，抽象类与数据抽象互不混淆，数据抽象是把一个实现细节与相关的数据分离开的概念
 * 如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类
 * 纯虚函数是通过在声明中使用“=0”来指定的
 * 设计抽象类（ABC）的目的，是为了给其他类提供一个可以继承的适当的基类。抽象类不能用于被实例化的对象，它只能作为接口使用。如果将抽象类的实例化，会导致编译错误
 * 如果一个ABC的子类需要被实例化，则必须实现每个纯虚函数，这也意味着CPP支持使用ABC声明接口。如果没有在派生类中重写纯虚函数，就尝试实例化该类的对象，会导致编译错误
 * 可用于实例化对象的类被成为具体类
 */

class Shape
{
    public:
        virtual int getArea() = 0;
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        int width;
        int height;
};

// 派生类
class Rectangle : public Shape
{
    public:
        int getArea()
        {
            return (width * height);
        }
};
class Triangle : public Shape
{
    public:
        int getArea()
        {
            return (width * height)/2;
        }
};

int main(void)
{
    Rectangle Rect;
    Triangle Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);
    // 输出对象的面积
    cout << "Total Triangle area: " << Rect.getArea() << endl;

    Tri.setWidth(5);
    Tri.setHeight(7);
    // 输出对象的面积
    cout << "Total Triangle area: " << Tri.getArea() << endl;

    return 0;
}
