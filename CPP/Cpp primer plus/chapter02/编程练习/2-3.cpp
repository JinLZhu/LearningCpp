/* 编写一个C++程序，它使用3个用户定义的函数（包括main()), 并生成下面的输出：
 * Three blind mice
 * Three blind mice
 * See how they run
 * See how they run
 * 其中一个函数要调用两次，
 * 该函数生成前两行；另一个函数也被调用两次，并生成其余的输出。
 */
#include <iostream>
using namespace std;
void func_First_Print(void);
void func_Second_Print(void);

int main()    
{
    func_First_Print();
    func_First_Print();
    func_Second_Print();
    func_Second_Print();

    return 0;
}

void func_First_Print(void)
{
    cout << "Three blind mice" << endl;
}

void func_Second_Print(void)
{
    cout<< "See how they run" << endl;
}


