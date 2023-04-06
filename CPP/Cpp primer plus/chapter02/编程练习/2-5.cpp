/* 编写一个程序，其中main()调用一个用户定义的函数（以摄氏温度为参数，并返回相应的华氏温度值）。
 * 该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
 * Please enter a Celsius value: 20
 * 20 degrees Celsius is 68 degrees Fahrenheit.
 * 下面是转换公式：
 * 华氏温度 = 1.8 * 摄氏温度 + 32.0
 */
#include <iostream>
using namespace std;
float func_Fah_Temper(float);

int main()
{
    cout << "Please enter a Celsius value: ";
    float float_User_Input_Celsius = 0.0,
          float_Return_Fah_Temper = 0.0;
    cin >> float_User_Input_Celsius;
    float_Return_Fah_Temper = func_Fah_Temper(float_User_Input_Celsius);
    cout << float_User_Input_Celsius << " degrees Celsius is "
        << float_Return_Fah_Temper << " degrees Fahrenheit."
        << endl;

    return 0;
}

float func_Fah_Temper(float Celsius)
{
    float float_Return_Fah_Temper = 0.0;
    float_Return_Fah_Temper = 1.8 * Celsius + 32.0;

    return float_Return_Fah_Temper;
}

