#include <iostream>
using namespace std;

/* 可以重定义或重载大部分C++内置的运算符。
 * 这样就能使用自定义类型的运算符
 * 重载的运算符是带有特殊名称的函数，函数名是有关键字operator和其后要重载的运算符符号构成
 * 与其他函数一样，重载运算符有一个返回类型和一个参数列表
 */

class Box
{
    public:
        double getVolume(void)
        {
            return length * breadth * height;
        }
        void setLenght( double len )
        {
            length = len;
        }

        void setBreadth( double bre )
        {
            breadth = bre;
        }

        void setHeight( double hei )
        {
            height = hei;
        }

        // 重载 + 运算符，用于把两个Box对象相加
        Box operator+( const Box& b )
        {
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            return box;
        }

    private:
        double length;
        double breadth;
        double height;
};

int main()
{
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    Box1.setLenght(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    Box2.setLenght(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    volume = Box1.getVolume();
    cout << "Volume of Box1: " << volume << endl;

    volume = Box2.getVolume();
    cout << "Volume of Box2: " << volume << endl;

    Box3 = Box1 + Box2;

    volume = Box3.getVolume();
    cout << "Volume of Box3: " << volume << endl;

    return 0;
}
