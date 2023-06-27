#include "main.h"
using namespace std;

void Show_Contacts(struct contacts s[], int arr_len){
    cout << "显示联系人" << endl;
    for (int i = 0; i < arr_len; ++i){
        cout << "==================" << endl;
        cout << "姓名：" << s[i].string_name << endl;
        cout << "性别：" << s[i].bool_gender << endl;
        cout << "年龄：" << s[i].int_contactsAge << endl;
        cout << "电话：" << s[i].phone << endl;
        cout << "地址：" << s[i].string_address << endl;
        cout << "==================" << endl;

        if (s[i + 1].string_name == ""){
            break;
        }
    }
    cout << "按任意键返回！" << endl;
    cin.clear();
    cin.sync();
    cin.get();
}
