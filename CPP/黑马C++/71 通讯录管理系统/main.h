#include <iostream>
#include <string>

struct contacts {
    std::string string_name = "";
    bool bool_gender = 0;
    int int_contactsAge = 0;
    long phone = 0;
    std::string string_address = "";
};

void Add_Contacts(struct contacts s[], int arr_len);
void Show_Contacts(struct contacts s[], int arr_len);
void Pause_Some_Times(int int_second);
void Delete_Contacts(struct contacts s[], std::string string_name, int arr_len, struct contacts s_e[]);
void Search_Contacts(struct contacts s[], int arr_len, std::string search_name);
