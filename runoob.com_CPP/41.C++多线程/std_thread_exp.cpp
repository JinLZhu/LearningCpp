/*
 * C++11之后添加了新的标准线程库std::thread, 在<thread>头文件中声明
 * std::thread默认构造函数，创建一个空的执行对象
 * #include <thread>
 * std::thread thread_obj(callable)
 * callable可以是以下三个任意一个：
 * 函数指针
 * 函数对象
 * lambda表达式
 * 定义callable后，将其传递给std::thread构造函数thread_object
 */

// 演示多线程的cpp程序，使用三个不同的可调用对象
#include <iostream>
#include <thread>
using namespace std;

// 一个虚拟函数
void foo(int Z)
{
    for (int i=0; i<Z; i++){
        cout << "线程使用函数指针作为可调用参数\n";
    }
}

// 可调用对象
class thread_obj {
    public:
        void operator()(int x)
        {
            for (int i=0; i < x; i++)
                cout << "线程使用函数对象作为可调用参数\n";
        }
};

int main()
{
    cout << "线程1、2、3 "
        "独立运行" << endl;

    // 函数指针
    thread th1(foo, 3);

    // 函数对象
    thread th2(thread_obj(), 3);

    // 定义lambda表达式
    auto f=[](int x) {
        for (int i = 0; i < x; i++)
            cout << "线程使用lambda表达式作为可调用参数\n";
    };

    // 线程通过使用lambda表达式作为可调用的参数
    thread th3(f, 3);

    // 等待线程完成
    // 等待线程t1完成
    th1.join();

    // 等待线程t2完成
    th2.join();

    // 等待线程t1完成
    th3.join();

    return 0;
}
