#include <iostream>
#include <string>
using namespace std;
/*
 * 模板是泛型编程的基础，泛型变成即以一种独立于任何特定类型的方式编写代码
 * 模板是创建泛型类或函数的蓝图或公式。库容器，比如迭代器算法，都是泛型变成的例子，它们都使用了模板的概念
 * 每个容器都有一个单一的定义，比如向量，我们可以定义许多不同类型的向量，比如vector<int>或vector<string>
 * 可以使用模板来定义函数和类，接下来我们一起看看如何使用
 * 定义如下：
 * template <typename type> ret-type func-name(parameter list)
 * {
 *      // 函数的主体
 * }
 */

template <typename T>
inline T const& Max (T const& a, T const& b)
{
    return a < b ? b:a;
}

int main()
{
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;
    
    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;

    return 0;
}

