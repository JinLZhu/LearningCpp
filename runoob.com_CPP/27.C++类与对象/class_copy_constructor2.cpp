#include <iostream>

using namespace std;

class Line
{
    public:
        int getLength( void );
        Line( int len );
        Line( const Line &obj );
        ~Line();

    private:
        int *ptr;
};

//成员函数及构造函数定义
Line::Line( int len )
{
    cout << "调用构造函数" << endl;
    //为指针分配内存
    ptr = new int;
    *ptr = len;
}

Line::Line( const Line &obj )
{
    cout << "调用拷贝构造函数并为指针ptr分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr;    //拷贝值
}

Line::~Line(void)
{
    cout << "释放内存" << endl;
    delete ptr;
}

int Line::getLength( void )
{
    return *ptr;
}

void display(Line obj)
{
    cout << "line大小 : " << obj.getLength() << endl;
}

int main()
{
    Line line1(10);

    Line line2 = line1;     //这里也调用了拷贝函数
                            
    display(line1);
    display(line2);

    return 0;
}
