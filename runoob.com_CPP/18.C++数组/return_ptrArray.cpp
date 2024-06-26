#include <cstddef>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//要生成和返回随机数的函数
int * getRendom()
{
    static int r[10];
    
    //设置种子
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }
    return r;
}


int main()
{
    //一个指向整数的指针
    int *p;

    p = getRendom();
    for (int i = 0; i < 10; i++)
    {
        cout << "*(p + " << i << "): ";
        cout << *(p + i) << endl;
    }

    return 0;
}
