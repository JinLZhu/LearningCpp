#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char str1[13] = "runoob";
    char str2[13] = "google";
    char str3[13];
    int len;

    // 复制str1到str3
    strcpy(str3, str1);
    cout << "strcopy(str3, str1):" << str3 << endl;

    // 连接str1和str2
    strcat(str1, str2);
    cout << "strcat(str1, str2): " << str1 << endl;
    
    // 连接后，str1的总长
    len = strlen(str1);
    cout << "strlen(str1): " << len << endl;

    return 0;
}
