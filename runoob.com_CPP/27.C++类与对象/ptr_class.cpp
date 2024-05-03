#include <iostream>
#include <ostream>

class MyClass {
    public:
        int data;

        void display() {
            std::cout << "Date: " << data << std::endl;
        }
};

int main()
{
    MyClass obj;
    obj.data = 42;

    //声明和初始化指向类的指针
    MyClass *ptr = &obj;
    
    //通过指针访问成员变量
    std::cout << "Data via pointer: " << ptr->data << std::endl;

    ptr->display();

    return 0;
}
