/*
 *案例描述:
 *设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄
 *通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果
*/
#include <iostream>
#include <string>
using namespace std;

struct hero_struct{
    string string_Name;
    int int_age;
    bool bool_gender;
};

struct hero_temp{
    string string_Name;
    int int_age;
    bool bool_gender;
};

void sort_hero(struct hero_struct s[], int arr_len, struct hero_temp temp_hero){
    for(int i = 0; i < arr_len; ++i){
        for(int j = 0; j < i; ++j){
            if (s[i].int_age > s[j].int_age){
                swap(s[i], s[j]);
                /*
                temp_hero.string_Name = s[i].string_Name;
                s[i].string_Name = s[j].string_Name;
                s[j].string_Name = temp_hero.string_Name;

                temp_hero.int_age = s[i].int_age;
                s[i].int_age = s[j].int_age;
                s[j].int_age = temp_hero.int_age;

                temp_hero.bool_gender = s[i].bool_gender;
                s[i].bool_gender = s[j].bool_gender;
                s[j].bool_gender = temp_hero.bool_gender;
                */
            }
        }
    }
}

void print_sort(struct hero_struct s[], int arr_len)
{
    for (int i = 0; i < arr_len; ++i){
        cout << s[i].string_Name << ", " 
            << s[i].int_age << ", "
            << s[i].bool_gender
            << endl;
    }
}

int main()
{
    struct hero_struct struct_hero[5]{
        {"刘备", 23, 1},
        {"关羽", 22, 1},
        {"张飞", 20, 1},
        {"赵云", 21, 1},
        {"貂蝉", 19, 0}
    };
    struct hero_temp temp_hero;

    int arr_len = sizeof(struct_hero) / sizeof(hero_struct);
    cout << "排序前：" << endl;
    print_sort(struct_hero, arr_len);
    sort_hero(struct_hero, arr_len, temp_hero);
    cout << "排序后：" << endl;
    print_sort(struct_hero, arr_len);

    return 0;
}
