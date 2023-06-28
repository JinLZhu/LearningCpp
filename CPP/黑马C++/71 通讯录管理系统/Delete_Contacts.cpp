#include "main.h"
using namespace std;

void Delete_Contacts(struct contacts s[], string s_name, int arr_len){
    for(int i = 0; i < arr_len; ++i){
        if (s[i].string_name == s_name){
            if (i = arr_len - 1){
                s[i].string_name = "";
                s[i].bool_gender = 0;
                s[i].int_contactsAge = 0;
                s[i].phone;
                s[i].string_address = "";
            } else {
                s[i] = s[i + 1];
                if (i <= arr_len - 2){
                    s[i + 1] = s[i + 2];
                }
            }
        }
    }
}
