#include <iostream>

class MyClass {
    public:
        int data;

        void display() {
            std::cout << "Data: " << data << std::endl;
        }
};

//函数接受指向类的指针作为参数
void processObject(MyClass *ptr) {
    ptr->display();
}

int main()
{
    MyClass obj;
    obj.data = 42;

    //将指向类的指针传递给函数
    processObject(&obj);

    return 0;
}
