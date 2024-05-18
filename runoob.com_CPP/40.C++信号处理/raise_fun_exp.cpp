/* 
 * 可以使用函数raise()生成信号
 * 该函数带有一个整数信号编号作为参数
 * 语法：
 * int raise(signal sig);
 */
#include <iostream>
#include <csignal>
#include <unistd.h>
using namespace std;

void signalHandler( int signum )
{
    cout << "Interrupt signal (" << signum << ") recevied.\n";
    // 清理并关闭
    // 终止程序

    exit(signum);
}

int main()
{
    int i = 0;
    // 注册信号SIGINT和信号处理程序
    signal(SIGINT, signalHandler);

    while(++i){
        cout << "Goin to sleep...." << endl;
        if (i == 3){
            raise(SIGINT);
        }
        sleep(1);
    }

    return 0;
}
