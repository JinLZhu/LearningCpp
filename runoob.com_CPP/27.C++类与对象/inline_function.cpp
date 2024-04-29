#include <iostream>
using namespace std;

/*
 * 内联函数通常与类一起使用。如果一个函数是内联的，那么编译时，编译器会把该函数的代码副本放置在每个调用该函数的地方
 * 对内联函数进行任何修改，都需要重新编译函数的所有客户端，因为编译器需要重新更换一次所有的代码，否则将会使用就的函数
 * 关键字
 * inline，在调用函数之前需要对函数进行定义。如果已定义函数多于一行，编译器会忽略inline限定符
 * 类定义中的定义函数都是内联函数，即使没有inline说明
 */

inline int Max( int x, int y )
{
    return (x > y)?x:y;
}

int main()
{
    cout << "Max(20, 10):" << Max(20, 10) << endl;
    cout << "Max(0, 200):" << Max(0, 200) << endl;
    cout << "Max(100, 1010):" << Max(100, 1010) << endl;

    return 0;
}
