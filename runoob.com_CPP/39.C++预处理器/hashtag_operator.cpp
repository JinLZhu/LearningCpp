#include <iostream>
using namespace std;

/*
 * #和##预处理运算符在C++和ANSI/ISO C中都是可用的
 * #运算符会把replacement-text令牌转换为用引号引起来的字符串
 */

#define MKSTR( x ) #x
int main()
{
    cout << MKSTR(HELLO C++) << endl;
    
    return 0;
}
