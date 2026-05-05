#include <iostream>
using namespace std;

class Animal {

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout << "Animal Barking" << endl;
    };

};

class Human {

    public:
    string color;

    public:
    void speak() {
        cout << "Human Speaking" << endl;
    }
};

// Multiple Inheritance
class Hybrid : public Animal, public Human {


};

int main()
{
    Hybrid obj;
    obj.bark();
    obj.speak();

    return 0;
}