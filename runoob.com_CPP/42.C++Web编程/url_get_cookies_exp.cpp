#include <cgicc/CgiEnvironment.h>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>

#include <cgicc/CgiDefs.h>
#include <cgicc/Cgicc.h>
#include <cgicc/HTTPXHTMLHeader.h>
#include <cgicc/HTMLClasses.h>

using namespace std;

int main()
{
   cgicc::Cgicc cgi;
   cgicc::const_cookie_iterator cci;

   cout << "Content-type: text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>CGI中的Cookies</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
   cout << "<table border = \"0\" cellspacing = \"2\">";

   // 获取环境变量
   const cgicc::CgiEnvironment& env = cgi.getEnvironment();

   for( cci = env.getCookieList().begin();
           cci != env.getCookieList().end();
           ++cci){
       cout << "<tr><td>" << cci->getName() << "</td><td>";
       cout << cci->getValue();
       cout << "</td></tr>\n";
   }
   cout << "</table><\n";

   cout << "<br />\n";
   cout << "</body>\n";
   cout << "</html>\n";

   return 0;
}
