#include <iostream>
#include <cstring>

using namespace std;
void printBook( struct Books *book);

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    Books book1;
    Books book2;

    strcpy( book1.title, "C++ 教程");
    strcpy( book1.author, "Runoob");
    strcpy( book1.subject, "编程语言");
    book1.book_id = 11111;

    strcpy( book2.title, "CSS 教程");
    strcpy( book2.author, "Runoob");
    strcpy( book2.subject, "前端技术");
    book1.book_id = 22222;
    
    // 通过传入Book1的地址来输出信息
    printBook( &book1 );
    printBook( &book2 );

    return 0;
}

void printBook( struct Books *book)
{
    cout << "标题：" << book->title << endl;
    cout << "作者：" << book->author << endl;
    cout << "类目：" << book->subject << endl;
    cout << "ID  ：" << book->book_id << endl;
}
