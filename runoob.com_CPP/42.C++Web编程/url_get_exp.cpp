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
    cgicc::Cgicc formData;

    cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>使用GET和POST方法</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";

    cgicc::form_iterator fi = formData.getElement("first_name");
    if (!fi->isEmpty() && fi != (*formData).end()) {
        cout << "名：" << **fi << endl;
    }else{
        cout << "No text entered for first name" << endl;
    }
    cout << "<br />\n";
    fi = formData.getElement("last_name");
    if( !fi->isEmpty() && fi != (*formData).end()) {
        cout << "姓：" << **fi << endl;
    }else{
        cout << "No text entered for last name" << endl;
    }
    cout << "<br />\n";

    cout << "</body>\n";
    cout << "<html>\n";

    return 0;
}
