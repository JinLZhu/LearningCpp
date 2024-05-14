#include <iostream>
using namespace std;

// 第一个命名空间
namespace first_space {
    void func() {
        cout << "Inside first_spare" << endl;
    }
}
// 第二个命名空间
namespace second_spare {
    void func() {
        cout << "Inside second_spare" << endl;
    }
}
using namespace first_space;
int main()
{
    // 调用第一个命名空间的函数
    func();

    return 0;
}
