#include <iostream>
#include <istream>
#include <ostream>
using namespace std;
/*
 * 使用流提取运算符>>和流插入运算符<<来输入和输出内置的数据类型
 * 可以重载流提取运算符和流插入运算符
 * 来操作对象等用户自定义的数据类型
 * 有一点很重要，我们需要把运算符重载函数声明为类的友元函数
 * 这样就能不用创建对象直接调用函数
 */
class Distance
{
    private:
        int feet;
        int inches;
    public:
        Distance(){
            feet = 0;
            inches = 0;
        }
        Distance(int f, int i){
            feet = f;
            inches =i;
        }
        friend ostream &operator<<( ostream &output, 
                const Distance &D )
        {
            output << "F: " << D.feet << "I: " << D.inches;
            return output;
        }
        friend istream &operator>>( istream &input, Distance &D )
        {
            input >> D.feet >> D.inches;
            return input;
        }
};

int main()
{
    Distance D1(11, 10), D2(5, 11), D3;

    cout << "Enter the value of object: " << endl;
    cin >> D3;
    cout << "First Distance: " << D1 << endl;
    cout << "Second Distance: " << D2 << endl;
    cout << "Third Distance: " << D3 << endl;

    return 0;
}
