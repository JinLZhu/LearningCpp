#include "main.h"

void Add_Contacts(struct contacts s[], int arr_len){
    std::cout << "增加联系人" << std::endl;    
    for (int i = 0; i < arr_len; ++i){
        if (s[i].string_name != ""){
            continue;
        }

        std::cout << "输入姓名：";
        std::cin >> s[i].string_name;
        std::cout << "输入性别：";
        std::cin >> s[i].bool_gender;
        std::cout << "输入年龄：";
        std::cin >> s[i].int_contactsAge;
        std::cout << "联系方式：";
        std::cin >> s[i].phone;
        std::cout << "现居住地：";
        std::cin >> s[i].string_address;

        char char_UserReInput;
        std::cout << "是否继续添加？(Y/N)";
        std::cin >> char_UserReInput;
        if ((char_UserReInput == 'N') || (char_UserReInput == 'n')){
            break;
        } else if (i == arr_len - 1){
            std::cout << "通讯录已满，即将返回！" << endl;
            Pause_Some_Times(3);
            break;
        } 
    }
}
