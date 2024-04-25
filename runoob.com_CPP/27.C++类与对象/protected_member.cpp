#include <iostream>
using namespace std;

class Box
{
    protected:
        double width;
};

class SmallBox:Box          // SmallBox由Box派生
{
    public:
        void setSmallWidth( double wid );
        double getSmallWidth( void );
};

// 子类成员函数
double SmallBox::getSmallWidth(void)
{
    return width;
}

void SmallBox::setSmallWidth( double wid )
{
    width = wid;
}

int main()
{
    SmallBox box;

    // 使用成员函数初始化
    box.setSmallWidth(5.0);
    cout << "Width of box : " << box.getSmallWidth() << endl;

    return 0;
}
