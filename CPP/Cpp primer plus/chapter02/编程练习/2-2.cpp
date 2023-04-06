// 编写一个C++程序， 它要求用户输入一个以long为单位的距离，
// 然后将它转换为码。（一long等于220码）
#include <iostream>

int main()
{
    using namespace std;
    long long User_Input = 0;
    cout << "请输入距离： ";
    cin >> User_Input;
    cout << "码数为：" << User_Input * 220 << endl;

    return 0;
}

