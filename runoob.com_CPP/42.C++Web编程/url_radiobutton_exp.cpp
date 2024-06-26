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
    cout << "<title>向CGI程序传递单选按钮数据</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";

    cgicc::form_iterator fi = formData.getElement("subject");
    if ( !fi->isEmpty() && fi != (*formData).end()) {
        cout << "Radio box selected: " << **fi << endl;
    }

    cout << "<br />\n";
    cout << "</body>\n";
    cout << "</html>";

    return 0;
}
