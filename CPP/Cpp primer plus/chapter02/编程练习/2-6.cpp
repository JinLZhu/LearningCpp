/* 编写一个程序，其main()调用一个用户定义的函数(以光年值为参数，并返回对应天文单位的值）。
 * 该程序按下面的个是要求用户输入光年值，并显示结果：
 * Enter the number of light years: 4.2
 * 4.2 light years = 265608 astronomical units.
 * 天文单位是从地球到太阳的平均距离（约150000000公里或93000000英里），
 * 光年是光一年走的距离（约10万亿公里或6万亿英里）（除太阳外，最近的恒星大约离地球4.2光年）。
 * 请使用double类型（参见程序清单2.4），转换公式为：
 * 1光年=63240天文单位
 */
#include <iostream>
using namespace std;
double func_astronomical_unit(double);

int main()
{
    cout << "Enter the number of light years: ";
    double double_User_Input_LightYears = 0.0,
           double_Return_Astronomical_Unit = 0.0;
    cin >> double_User_Input_LightYears;
    double_Return_Astronomical_Unit = 
        func_astronomical_unit(double_User_Input_LightYears);
    cout << double_User_Input_LightYears <<
        " light years = " << double_Return_Astronomical_Unit
        << " astronomical units." << endl;

    return 0;
}

double func_astronomical_unit(double light_years)
{
    double double_Return_Astronomical_Unit = 0.0;
    double_Return_Astronomical_Unit = 
        light_years * 63240;
    return double_Return_Astronomical_Unit;
}
