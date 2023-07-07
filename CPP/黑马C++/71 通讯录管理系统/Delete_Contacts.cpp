#include "main.h"

void Delete_Contacts(struct contacts s[], std::string s_name, int arr_len, struct contacts s_e[]){
    std::cout << "s_name is " << s_name << std::endl;
    std::cout << "arr_len is " << arr_len << std::endl;
    for(int i = 0; i < arr_len; ++i){
        std::cout << "s[i].string_name is " << s[i].string_name << std::endl;
        if (s[i].string_name == s_name){
            if (i = arr_len - 1){
                std::cout << "X" << std::endl;
                s[i] = s_e[0];
            } else {
                std::cout << "Y" << std::endl;
                s[i] = s[i + 1];
                /*
                if (i <= arr_len - 2){
                    s[i + 1] = s[i + 2];
                }
                */
            }
            std::cin.get();
            std::cin.get();
        }
    }
}
