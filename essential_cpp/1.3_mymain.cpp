#include <string>
#include <iostream>
using namespace std;

int my_main()
{
    string user_name;
    cout << "Please enter your first name: ";
    cin >> user_name;
    cout << '\n'
         << "Hello, "
         << user_name
         << "... and goodbye!\n";
    return 0;
}
