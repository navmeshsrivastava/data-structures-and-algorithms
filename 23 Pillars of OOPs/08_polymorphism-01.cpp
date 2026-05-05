// Compile Time Polymosrphism
// Function Overloading

#include <iostream>
using namespace std;

class A {

    public: 

    void sayHello () {
        cout << "Hello Love Babbar " << endl;
    }


    void sayHello (string name) {
        cout << "Hello " << name << endl;
    }

};

class B {

    public:
    int a;
    int b;

    public:
    int add () {
        return a+b;
    }

    // Operator Overloading
    void operator +(B &obj ) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "ouput " << value2 - value1 << endl;

    }

    void operator() () {
        cout << "Bracket " << this -> a << endl;
    }
 };

int main()
{
    A obj;
    obj.sayHello();

    B obj1, obj2;
    obj1.a = 9;
    obj2.a = 12;
    obj1 + obj2;
    obj2();
    

    return 0;
}