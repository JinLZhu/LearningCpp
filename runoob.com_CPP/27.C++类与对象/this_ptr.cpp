#include <iostream>

class MyClass {
    private:
        int value = 0;

    public:
        void setValue( int value_user ) {
            this->value = value_user;
        }

        void printValue() {
            std::cout << "Value : " << this->value << std::endl;
        }
};

int main() {
    MyClass obj;
    obj.setValue( 43 );
    obj.printValue();

    return 0;
}
