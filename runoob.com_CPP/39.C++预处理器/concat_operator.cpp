#include <iostream>
using namespace std;

/*
 * 当concat出现在程序中时，它的参数会被连接起来，并用来取代宏
 */

#define concat(a, b) a ## b
int main()
{
    int xy = 100;

    cout << concat(x, y);
    return 0;
}
