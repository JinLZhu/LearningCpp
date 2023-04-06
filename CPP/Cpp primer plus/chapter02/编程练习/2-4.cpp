/* 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
 * Enter your age: 29
*/
#include <iostream>
using namespace std;

int main()
{
    int int_User_Age = 0;
    cout << "Enter your age: ";
    cin >> int_User_Age;
    cout << "Convert to month: " << int_User_Age * 12 << endl;

    return 0;
}

