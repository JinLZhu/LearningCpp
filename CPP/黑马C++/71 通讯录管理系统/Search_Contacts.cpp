#include "main.h"

int Search_Contacts(struct contacts s[], int arr_len, std::string search_name)
{
    std::cout << "正在搜索：" << search_name << std::endl;
    for (int i = 0; i < arr_len; ++i){
       if (s[i].string_name == search_name){
           std::cout << "通讯录中存在此联系人!" << std::endl;
           std::cout << "姓名：" << s[i].string_name << std::endl;
           std::cout << "性别：" << s[i].bool_gender << std::endl;
           std::cout << "年龄：" << s[i].int_contactsAge << std::endl;
           std::cout << "电话：" << s[i].phone << std::endl;
           std::cout << "地址：" << s[i].string_address << std::endl;
           return 1;
           break;
       } else if (i == (arr_len - 1)){
          std::cout << "通讯录中无此联系人!" << std::endl;
          return 0;
       }
    }

    std::cin.get();
    std::cin.get();
}
