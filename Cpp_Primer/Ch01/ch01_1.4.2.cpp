#include <iostream>
#include <ostream>

int main()
{
    int sum = 0;
    //从1 加到 10
    for (int val = 0; val <=10; ++val)
    {
        sum += val;
        std::cout << "Sum of 1 to 10 inclusive is "
                  << sum << std::endl;
    }

    return 0;
}