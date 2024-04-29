#include <iostream>

using namespace std;

/*
 * 类的构造函数是类的一种特殊成员函数，会在每次创建类的新对象时执行
 * 构造函数的名称与类完全相同，并不会返回任何类型，也不会返回void
 * 构造函数可用于某些成员变量设置初始值
 */

class Line{
    public: 
        void setLength( double len );
        double getLength( void );
        Line(); //这是构造函数

    private:
        double length;
};

Line :: Line(void)
{
    cout << "Object is being created." << endl;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return length;
}

int main()
{
    Line line;

    //设置长度
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;

    return 0;
}
