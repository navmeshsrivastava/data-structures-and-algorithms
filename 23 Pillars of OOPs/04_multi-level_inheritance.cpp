#include <iostream>
using namespace std;

class Animal {

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << "Animal Speaking" << endl;
    };

};

class Dog : public Animal {


};

class GermanShepard : public Dog {


};


int main()
{
    GermanShepard G;
    G.speak();

    return 0;
}