#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "runoob";
    string str2 = "google";
    string str3;
    int len;

    //复制str1到str3
    str3 = str1;
    cout << "str3: " << str3 << endl;

    //连接str1和str2
    str3 = str1 + str2;
    cout << "str1 + str2: " << str3 << endl;

    //连接后，str3的长度
    len = str3.size();
    cout << "str3.size(): " << len << endl;

    return 0;
}
