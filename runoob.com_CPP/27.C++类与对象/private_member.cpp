#include <iostream>

using namespace std;

class Box
{
    public:
        double length;
        void setWidth( double wid );
        double getWidth( void );

    private:
        double width;
};

// 成员函数
double Box::getWidth(void){
    return width;
}

void Box::setWidth( double wid ){
    width = wid;
}

int main()
{
    Box box;

    // 不使用成员函数设置长度
    box.length = 10.0;
    cout << "length of box：" << box.length << endl;

    //不使用成员函数设置宽度
    // box.width = 10.0;    //ERROR,width私有
    box.setWidth(10.0);     //使用成员函数设置宽度
    cout << "Width of box : " << box.getWidth() << endl;

    return 0;
}
