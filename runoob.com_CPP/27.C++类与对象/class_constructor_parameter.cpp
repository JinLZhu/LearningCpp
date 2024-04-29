#include <iostream>
#include <stdexcept>

using namespace std;

/*
 * 默认的构造函数没有任何参数，但如果需要，构造函数也可以带参数
 * 这样在创建对象时就会给对象赋予初始值
 */

class Line
{
    public:
        void setLength( double len );
        double getLength( void );
        Line(double len);    //这是构造函数

    private:
            double length;
};

// 成员及构造函数定义
Line::Line( double len )
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
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
    Line line(10.0);

    // 获取默认设置的长度
    cout << "Length of line : " << line.getLength() << endl;

    //再次设置长度
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;

    return 0;
}
