#include <iostream>
using namespace std;

class Adder {
    private: 
        // 对外隐藏的数据
        int total;

    public:
        // 构造函数
        Adder(int i=0)
        {
            total = i;
        }
        void addNum( int number )
        {
            total += number;
        }

        int getTotal()
        {
            return total;
        }
};

int main()
{
    Adder a;

    a.addNum(10);
    a.addNum(20);
    a.addNum(30);

    cout << "Total: " << a.getTotal() << endl;

    return 0;
}
