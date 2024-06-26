#include <iostream>

using namespace std;

/*
 * 类的友元函数定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员
 * 尽管友元函数的原型在类的定义中出现过，但友元函数并不是成员函数.
 * 友元可以是一个函数，称为友元函数;
 * 友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元
 * 关键字 friend
 */
class Box
{
    double width;
    public:
        friend void printWidth( Box box );
        void setWidth( double wid );
};

//成员函数定义
void Box::setWidth( double wid )
{
    width = wid;
}

// 请注意：printWidth() 不是任何类的成员函数
void printWidth( Box box )
{
    // 因 printWidth() 是Box的友元， 它可以直接访问该类的所有成员
    cout << "Width of box : " << box.width << endl;
}

int main()
{
    Box box;

    //使用成员函数设置宽度
    box.setWidth(10.0);

    //使用友元函数输出宽度
    printWidth( box );

    return 0;
}
