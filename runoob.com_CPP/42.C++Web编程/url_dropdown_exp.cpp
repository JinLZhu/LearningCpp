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

    cout << "Content-type: text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>向 CGI 程序传递下拉框数据</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";

    cgicc::form_iterator fi = formData.getElement("dropdown");
    if (!fi->isEmpty() && fi != (*formData).end()) {
        cout << "Value Selected: " << **fi <<endl;
    }

    cout << "<br />\n";
    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}
