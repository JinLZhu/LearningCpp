#include <iostream>
using namespace std;
/*
 * 按字面意思，多态就是多种形态。
 * 当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态
 * 多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数
 */

class Shape {
    protected:
        int width, height;
    public:
        Shape( int a=0, int b=0)
        {
            width = a;
            height = b;
        }
        virtual int area()
        {
            cout << "Parent class area :" << endl;
            return 0;
        }
};
class Rectangle : public Shape {
    public:
        Rectangle( int a=0, int b=0):Shape(a, b){ }
        int area()
        {
            cout << "Rectangle class area : " << endl;
            return (width * height);
        }
};
class Triangle : public Shape {
    public:
        Triangle( int a=0, int b=0):Shape(a, b){ }
        int area()
        {
            cout << "Triangle class area : " << endl;
            return (width * height / 2);
        }
};

int main()
{
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    shape = &rec;
    shape->area();

    shape = &tri;
    shape->area();

    return 0;
}
