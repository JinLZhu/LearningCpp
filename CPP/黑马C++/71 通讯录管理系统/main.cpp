/*
 *
    *通讯录是一个可以记录亲人、好友信息的工具。
    *本教程主要利用C++来实现一个通讯录管理系统系统中需要实现的功能如下:
    *添加联系人:向通讯录中添加新人，信息包括(姓名、性别、年龄、联系电话、家庭住址最多记录1000人
    *显示联系人:显示通讯录中所有联系人信息
    *删除联系人:按照姓名进行删除指定联系人
    *查找联系人:按照姓名查看指定联系人信息
    *修改联系人:按照姓名重新修改指定联系人
    *清空联系人:清空通讯录中所有信息
    *退出通讯录:退出当前使用的通讯录
 *
 */
#include "Add_Contacts.h"
#include <iostream>
#include <string>
using namespace std;

struct contacts {
    string string_name;
    bool bool_gender;
    int int_contactsAge;
    long phone;
    string string_address;
};

int func_ShowMenu(){
    cout << 
    "****************************" << "\n"
    "*****  1、添加联系人  *****" << "\n"
    "*****  2、显示联系人  *****" << "\n"
    "*****  3、删除联系人  *****" << "\n"
    "*****  4、查找联系人  *****" << "\n"
    "*****  5、修改联系人  *****" << "\n"
    "*****  6、清空联系人  *****" << "\n"
    "*****  0、退出联系人  *****" << "\n"
    "****************************" << "\n"
    << endl;

    int int_UserInput = 0;
    cout << "输入功能编号：";
    cin >> int_UserInput;

    return int_UserInput;
}

int main()
{
    struct contacts struct_contacts[1000];
    int arr_len = sizeof(struct_contacts) / sizeof(contacts);

    cout << arr_len << endl;

    for(;;){
        int int_UserChoise = 0;
        int_UserChoise = func_ShowMenu();

        //system("clear");
        switch (int_UserChoise)
        {
            case 1:
                //添加联系人
                //cout << "1" << endl;
                Add_Contacts(struct_contacts, arr_len); 
                break;

            case 2:
                cout << "2" << endl;
                break;

            case 3:
                cout << "3" << endl;
                break;

            case 4:
                cout << "4" << endl;
                break;

            case 5:
                cout << "5" << endl;
                break;

            case 6:
                cout << "6" << endl;
                break;

            case 0:
                cout << "0" << endl;
                return 0;
                break;

            default:
                cout << "输入正确选项!" << endl;
                continue;
        }
        //system("clear");
    }

    return 0;
}
