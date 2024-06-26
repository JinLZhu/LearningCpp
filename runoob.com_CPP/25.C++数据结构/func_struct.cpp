#include <iostream>
#include <cstring>
#include <ostream>

using namespace std;
void printBook( struct Books book );

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    Books Book1;
    Books Book2;

    strcpy( Book1.title, "C++ 教程");
    strcpy( Book1.author, "Runoob");
    strcpy( Book1.subject, "编程语言");
    Book1.book_id = 11111;
    
    strcpy( Book2.title, "CSS 教程");
    strcpy( Book2.author, "Runoob");
    strcpy( Book2.subject, "前端技术");
    Book2.book_id = 22222;

    cout << "******************************" << endl;
    printBook( Book1 );

    printBook( Book2 );

    return 0;
}

void printBook( struct Books book )
{
    cout << "书标题：" << book.title << endl;
    cout << "书作者：" << book.author << endl;
    cout << "书类目：" << book.subject << endl;
    cout << "书  ID：" << book.book_id << endl;
}
