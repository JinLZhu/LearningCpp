#include <cfloat>
#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        int inches;
    public:
        Distance(){
            feet = 0;
            inches = 0;
        }
        Distance(int f, int i){
            feet = f;
            inches = i;
        }
        // 显示距离的方法
        void displayDistance()
        {
            cout << "F: " << feet << " I: " << inches << endl;
        }
        // 重载负运算符（ - ）
        Distance operator- ()
        {
            feet = -feet;
            inches = -inches;
            return Distance(feet, inches);
        }

        // 重载负运算符（ < ）
        bool operator< (const Distance& d)
        {
            if( feet < d.feet )
            {
                return true;
            }

            if(feet == d.feet && inches < d.inches)
            {
                return true;
            }
            return false;
        }
};

int main()
{
    Distance D1(11, 10), D2(5, 11);

    if( D1 < D2 )
    {
        cout << "D1 is less than D2 " << endl;
    }
    else
    {
        cout << "D2 is less than D1 " << endl;
    }
    return 0;
}
