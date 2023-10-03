#include "main.h"

void Delete_Contacts(struct contacts s[], std::string s_name, int arr_len, struct contacts s_e[]){
    std::cout << "是否确认删除 " << s_name << " ?" << std::endl;
    std::cin.get();
    for(int i = 0; i < arr_len; ++i){
        if (s[i].string_name == s_name){
            for (int j=i; j < arr_len; ++j){
                if (j == arr_len - 1){
                    s[j] = s_e[0];
                    break;
                } else {
                    s[i] = s[i + 1];
                }
            } 
        }
    }
}
