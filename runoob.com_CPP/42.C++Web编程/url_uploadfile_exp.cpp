#include <cgicc/HTTPContentHeader.h>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>

#include <cgicc/CgiDefs.h>
#include <cgicc/Cgicc.h>
#include <cgicc/HTTPHTMLHeader.h>
#include <cgicc/HTMLClasses.h>

using namespace std;

int main()
{
    cgicc::Cgicc cgi;

    cout << "Content-type: text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>CGI中的文件上传</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";

    // 获取文件列表
    cgicc::const_file_iterator file = cgi.getFile("userfile");
    if(file != cgi.getFiles().end()){
        // 在cout中发送数据类型
        cout << cgicc::HTTPContentHeader(file->getDataType());
        // 在cout中写入内容
        file->writeToStream(cout);        
    }
    cout << "<文件上传成功>\n";
    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}
