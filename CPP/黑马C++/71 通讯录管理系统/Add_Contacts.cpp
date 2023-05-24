#include "Add_Contacts.h"
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
            cout << "\n输入性别：";
            cin >> s[i].bool_gender;
            cout << "\n输入年龄：";
            cin >> s[i].int_contactsAge;
            cout << "\n联系方式：";
            cin >> s[i].phone;
            cout << "\n现居住地：";
            cin >> s[i].string_address;

            break;
        }

        cout << s[i].string_name << endl;
        cout << s[i].bool_gender << endl;
        cout << s[i].int_contactsAge << endl;
        cout << s[i].phone << endl;
        cout << s[i].string_address << endl;
    }
}
