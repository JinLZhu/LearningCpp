#include "main.h"
using namespace std;

void Add_Contacts(struct contacts s[], int arr_len){
    cout << "增加联系人" << endl;    
    for (int i = 0; i < arr_len; ++i){
        if (s[i].string_name == ""){
            if (i == arr_len - -1){
                cout << "通讯录已满！" << endl;
                break;
            }

            cout << "输入姓名：";
            cin >> s[i].string_name;
            cout << "输入性别：";
            cin >> s[i].bool_gender;
            cout << "输入年龄：";
            cin >> s[i].int_contactsAge;
            cout << "联系方式：";
            cin >> s[i].phone;
            cout << "现居住地：";
            cin >> s[i].string_address;
        }

        /*
        */

        break;
    }
}
