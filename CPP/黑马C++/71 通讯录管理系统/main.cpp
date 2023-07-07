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
#include "main.h"
#include <iostream>

int func_ShowMenu(){
    system("clear");
    std::cout << 
    "****************************" << "\n"
    "*****  1、添加联系人  *****" << "\n"
    "*****  2、显示联系人  *****" << "\n"
    "*****  3、删除联系人  *****" << "\n"
    "*****  4、查找联系人  *****" << "\n"
    "*****  5、修改联系人  *****" << "\n"
    "*****  6、清空联系人  *****" << "\n"
    "*****  0、退出本程序  *****" << "\n"
    "****************************" << "\n"
    << std::endl;

    int int_UserInput = 0;
    std::cout << "输入功能编号：";
    std::cin >> int_UserInput;

    return int_UserInput;
}

int main()
{
    //struct contacts struct_contacts[1000];
    struct contacts struct_contacts[3];
    struct contacts struct_EmptyContacts[1];
    int arr_len = sizeof(struct_contacts) / sizeof(contacts);


    for(;;){
        int int_UserChoise = 0;
        int_UserChoise = func_ShowMenu();

        switch (int_UserChoise)
        {
            case 1:
                //添加联系人
                Add_Contacts(struct_contacts, arr_len); 
                break;

            case 2:
                //cout << "2" << endl;
                Show_Contacts(struct_contacts, arr_len);
                break;

            case 3:{
                //cout << "3" << endl;
                std::string s_name;
                std::cout << "输入要删除的联系人姓名：";
                std::cin >> s_name;
                Delete_Contacts(struct_contacts, s_name, arr_len, struct_EmptyContacts);
                break;
            }

            case 4:
                break;

            case 5:
                break;

            case 6:
                break;

            case 0:
                return 0;
                break;

            default:
                std::cout << "输入正确选项!" << std::endl;
                continue;
        }
    }

    return 0;
}
