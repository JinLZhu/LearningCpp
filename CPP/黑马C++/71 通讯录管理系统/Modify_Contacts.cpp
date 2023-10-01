#include "main.h"

void Modify_Contacts(struct contacts s[], int isExsitContact)
{
         std::cout << "输入姓名：";
         std::cin >> s[isExsitContact].string_name;
         std::cout << "输入性别：";
         std::cin >> s[isExsitContact].bool_gender;
         std::cout << "输入年龄：";
         std::cin >> s[isExsitContact].int_contactsAge;
         std::cout << "联系方式：";
         std::cin >> s[isExsitContact].phone;
         std::cout << "现居住地：";
         std::cin >> s[isExsitContact].string_address;


         std::cout << "修改完成！" << std::endl;
         
}
