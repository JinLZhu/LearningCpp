#include <iostream>
using namespace std;
/*
 * 一元运算符只对一个操作数进行操作
 * 递增(++), 递减(--), 负号(-), 逻辑非(！)
 * 一元运算符出现在操作对象的左边或者右边
 * !obj, -obj, ++obj, obj++, obj--
 */

class Distance
{
    private:
        int feet;           // 0到无穷
        int inches;         // 0到12

    public:
        // 构造函数
        Distance(){
            feet = 0;
            inches = 0;
        }
        Distance( int f, int i){
            feet = f;
            inches = i;
        }
        // 显示距离的方法
        void displayDistance()
        {
            cout << "F: " << feet << " I:" << inches << endl;
        }
        // 重载运算符（ - ）
        Distance operator- ()
        {
            feet = -feet;
            inches = -inches;
            return Distance(feet, inches);
        }
};

int main()
{
    Distance D1(11, 10), D2(-5, 11);
    -D1;                        // 取相反数
    D1.displayDistance();       // 距离D1

    -D2;                        // 取相反数
    D2.displayDistance();       // 距离D2;

    return 0;
}
