#include <iostream>
#include <string>
//#define MAX 1000

struct contacts {
    std::string string_name = "";
    bool bool_gender = 0;
    int int_contactsAge = 0;
    long phone = 0;
    std::string string_address = "";
};

/*
struct address_books {
    struct contacts contactArray[MAX];
    int m_Size;
};
*/

void Add_Contacts(struct contacts s[], int arr_len);
void Show_Contacts(struct contacts s[], int arr_len);
void Pause_Some_Times(int int_second);
void Delete_Contacts(struct contacts s[], std::string string_name, int arr_len, struct contacts s_e[]);
int Search_Contacts(struct contacts s[], int arr_len, std::string search_name);
void Modify_Contacts(struct contacts s[], int isExsitContact);
void Erase_Contacts(struct contacts s[], struct contacts s_e[], int arr_len);
