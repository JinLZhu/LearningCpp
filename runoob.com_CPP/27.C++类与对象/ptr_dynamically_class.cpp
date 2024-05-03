#include <iostream>

class MyClass {
    public:
        int data;

        void display() {
            std::cout << "Data: " << data << std::endl;
        }

};

int main() {
    //动态分配内存创建对象
    MyClass *ptr = new MyClass;
    ptr->data = 42;

    // 通过指针调用成员函数
    ptr->display();

    // 释放动态分配的内存
    delete ptr;

    return 0;
}
