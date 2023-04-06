/* 编写一个程序，要求用户输入小时数和分钟数。
 * 在main()函数中，将这两个值传递给一个void函数，后者以下面的格式显示这两个值：
 * Enter the number of hours: 9
 * Enter the number of minutes: 28
 * Time 9:28
 */
#include <iostream>
using namespace std;
void void_Show_Times(int, int);

int main()
{
    int int_User_Input_hours = 0,
        int_User_Input_minutes = 0;
    cout << "Enter the number of hours: ";
    cin >> int_User_Input_hours;
    cout << "Enter the number of minutes: ";
    cin >> int_User_Input_minutes;

    void_Show_Times(int_User_Input_hours,
            int_User_Input_minutes);

    return 0;
}

void void_Show_Times(int hour, int minute)
{
    cout << "Time: " << hour << ":" << minute << endl;
}
