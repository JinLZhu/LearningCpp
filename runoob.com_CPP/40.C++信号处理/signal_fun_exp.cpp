/*
 * signal() 函数
 * 信号处理库提供, 用来捕获突发事件
 * 语法：
 * void (*signal (int sig, void (*func)(int)))(int);
 * 更容易理解版本:
 * signal(registered signal, signal handler)
 * 这个函数提供两个参数：第一个参数是要设置的信号的标识符，第二个参数是指向信号处理函数的指针。
 * 函数返回值是一个指向先前信号处理函数的指针
 * 如果先前没有设置信号处理函数则返回值为SIG_DFL
 * 如果先前设置的信号处理函数为SIG_IGN, 则返回值为SIG_IGN
 * 不管想在程序中捕获什么信号，都必须使用signal函数来注册信号，并将其与信号处理程序相关联
 */
#include <iostream>
#include <csignal>
#include <unistd.h>
using namespace std;

void signalHandler( int signum )
{
    cout << "Interrupt signal (" << signum << ") received.\n";
    // 清理并关闭
    // 终止程序

    exit(signum);
}

int main()
{
    // 注册信号SIGINT和信号处理程序
    signal(SIGINT, signalHandler);

    while(1){
        cout << "Going to sleep..." << endl;
        sleep(1);
    }

    return 0;
}
