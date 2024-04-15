#include <iostream>

using namespace std;

int main(void)
{
    char a = 'A';
    wchar_t b = L'B';
    wchar_t c = L'龙';

    cout << a << " -> " << sizeof(a) << endl;

    //宽字符输出用wcout
    wcout << b << " -> " << sizeof(b) << endl;

    // C++中默认为EN_US, 中文需转换
    //wcout.imbue(locale("chs"));
    wcout << c << " -> " << sizeof(c) << endl;

    return 0;
}
