#include "main.h"

void Show_Contacts(struct contacts s[], int arr_len){
    std::cout << "显示联系人" << std::endl;
    for (int i = 0; i < arr_len; ++i){
        std::cout << "==================" << std::endl;
        std::cout << "姓名：" << s[i].string_name << std::endl;
        std::cout << "性别：" << s[i].bool_gender << std::endl;
        std::cout << "年龄：" << s[i].int_contactsAge << std::endl;
        std::cout << "电话：" << s[i].phone << std::endl;
        std::cout << "地址：" << s[i].string_address << std::endl;
        std::cout << "==================" << std::endl;

        if (s[i + 1].string_name == ""){
            break;
        }
    }
    std::cout << "按任意键返回！" << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::cin.get();
    std::cin.get();
}
