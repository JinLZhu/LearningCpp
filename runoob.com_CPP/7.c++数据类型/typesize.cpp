#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "Type: \t\t" << "************size**************" << endl;
    cout << "Bool: \t\t" << "所占用字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "所占用字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t\t" << "所占用字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t\t" << "所占用字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t\t" << "所占用字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "所占用字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "所占用字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigend: \t\t" << "所占用字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "所占用字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigend long: \t\t" << "所占用字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t\t" << "所占用字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t\t" << "所占用字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "所占用字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t \t\t" << "所占用字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string \t\t" << "所占用字节数：" << sizeof(string);
    cout << "Type: \t\t" << "************size**************" << endl;

    //枚举类型
    enum color {red, green, blue} c;
    c = blue;
    //red == 0, green == 5, blue == 6
    enum _color {red, green=5, blue}

    //类型转换
    int i = 10;
    float f = static_cast<float>(i);    //静态将int转换为float
    
    class Base{}
    class Derived : public Base {};
    Base* ptr_base = new Derived;
    Derived* ptr_derived = dynamic_cast<Derived>(ptr_base);
    //将基类指针转换为派生类指针

    //常量转换
    const int j = 10;
    int& r = const_cast<int&>(j); //常量转换，将const int转换为int

    //重新解释转换
    int k = 10;
    float f = reinterpret_cast<float&>(k);
    // 重新解释转换，将int转换为float

    return 0;
}
