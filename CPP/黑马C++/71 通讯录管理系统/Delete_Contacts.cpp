#include "main.h"

void Delete_Contacts(struct contacts s[], std::string s_name, int arr_len, struct contacts s_e[]){
    std::cout << "s_name is " << s_name << std::endl;
    std::cout << "arr_len is " << arr_len << std::endl;
    for(int i = 0; i < arr_len; ++i){
        if (s[i].string_name == s_name){
            s[i] = s_e[0];
        }
        //std::cin.get();
        std::cin.get();
    }
}
