#include <iostream>
/*
 * this是一个特殊指针，它指向当前对象的实例
 * 每一个对象都能通过this来访问自己的地址
 * this是一个隐藏的指针，可以在类的成员函数中使用，可以用来指向调用对象
 * 当一个对象的成员函数被调用时，编译器会隐式地传递该对象的地址作为this指针
 * 友元函数没有this指针，因为友元不是类的成员，只有成员函数才有this指针
 */

class MyClass {
    private:
        int value = 0;

    public:
        void setValue( int value_user ) {
            this->value = value_user;
        }

        void printValue() {
            std::cout << "Value : " << this->value << std::endl;
        }
};

int main() {
    MyClass obj;
    obj.setValue( 43 );
    obj.printValue();

    return 0;
}
