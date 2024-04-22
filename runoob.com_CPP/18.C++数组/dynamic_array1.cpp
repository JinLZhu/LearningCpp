#include <iostream>
using namespace std;

int* myFunciton();
int main()
{
    int* result = myFunciton();
    for (int i = 0;i < 3;++i)
    {
        cout << *(result + i) << endl;
    }
    delete[] result;
    return 0;
}

int* myFunciton()
{
    int* myArray = new int[3];
    myArray[0] = 1;
    myArray[1] = 2;
    myArray[2] = 3;

    return myArray;
}

