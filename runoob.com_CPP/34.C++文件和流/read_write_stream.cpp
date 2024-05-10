#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char data[100];
    
    // 以写模式打开文件
    ofstream outfile;
    outfile.open("afile.dat");

    cout << "Writing to the file..." << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    // 向文件写入用户输入的数据
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    // 再次向文件写入用户输入的数据
    outfile << data << endl;

    // 关闭打开的文件
    outfile.close();

    // 以读模式打开文件
    ifstream infile;
    infile.open("afile.dat");

    cout << "Reading from the file..." << endl;
    infile >> data;

    // 在屏幕上写入数据
    cout << data << endl;

    // 再次从文件读取数据，并显示它
    infile >> data;
    cout << data << endl;

    // 关闭打开的文件
    infile.close();

    return 0;

    /*
     * istream 和 ostream都提供了用于重新定位文件位置指针的成员函数
     * 这些成员函数包括关于istream和seekg（“seek get”）和关于ostream的seekp（“seek put”）
     * seekg和seekp的参数通常是一个长整型
     * 第二个参数可以用于指定查找方向
     * 查找方向可以是ios::beg（默认的，从流的开头开始定位）
     * 也可以是ios::cur（从流的当前位置开始定位）
     * 也可以是ios::end（从流的末尾开始定位）
     * 文件位置指针是个整数值，制定了从文件的其实位置到指针所在位置的字节数
     */
    // 定位到fileObject的第n各字节（假设是ios::beg）
    //fileObject.seekg(n);

    // 把文件的读指针从fileObject 当前位置后移n个字节
    //fileObject.seekg(n, ios::cur);

    // 把文件的读指针从fileObject 末尾往回移n个字节
    //fileObject.seekg(n, ios::end);

    // 定位到fileObject的末尾
    //fileObject.seekg(0, ios::end);
}

