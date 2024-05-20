#include <iostream>
#include <memory>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

// 线程的运行函数
void* say_hello(void* args)
{
    cout << "Hello, Runoob!" << endl;
    return 0;
}

int main()
{
    // 定义线程的id 变量，多个变量使用数组
    pthread_t tids[NUM_THREADS];
    for ( int i = 0; i < NUM_THREADS; ++i)
    {
        // 参数依次是：创建的线程id,线程参数，调用的参数，传入的函数参数
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if(ret != 0)
        {
            cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
    // 等各个线程退出后，进程才能结束，否则进程强制结束，线程还没反应过来
    pthread_exit(NULL);

    return 0;
}
