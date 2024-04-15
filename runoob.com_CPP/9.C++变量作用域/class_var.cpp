#include <iostream>
class MyClass {
    public:
        static int class_var; //类作用域变量
};

int MyClass::class_var = 30;

int main()
{
    std::cout << "类变量：" << MyClass::class_var << std::endl;
    int class_var = 10;
    std::cout << "变量：" << class_var << std::endl;
    return 0;
}
