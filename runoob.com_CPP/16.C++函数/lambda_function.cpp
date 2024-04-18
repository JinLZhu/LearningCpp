#include <algorithm>
#include <iostream>
#include <vector>
struct Item
{
    Item(int aa, int bb) : a(aa), b(bb) {}
    int a;
    int b;
};

int main()
{
    std::vector<Item> vec;
    vec.push_back(Item(1, 19));
    vec.push_back(Item(10, 3));
    vec.push_back(Item(3, 7));
    vec.push_back(Item(8, 12));
    vec.push_back(Item(2, 1));

    // 根据Item中成员a升序排序
    std::sort(vec.begin(), vec.end(),
        [] (const Item& v1, const Item& v2) {
            return v1.a < v2.a;
        });

    // 打印vec中的item成员
    std::for_each(vec.begin(), vec.end(),
        [] (const Item& item) { std::cout << item.a << " " << item.b<< std::endl; });
    return 0;
}

