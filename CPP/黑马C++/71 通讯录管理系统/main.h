#include <iostream>
#include <string>

struct contacts {
    std::string string_name;
    bool bool_gender;
    int int_contactsAge;
    long phone;
    std::string string_address;
};

void Add_Contacts(struct contacts s[], int arr_len);
void Show_Contacts(struct contacts[], int arr_len);
void Pause_Some_Times(int int_second);
