// Run Time Polymorphism (Dynamic Polymorphism)
// Metthod Overriding

#include <iostream>
using namespace std;

class parent {
public:
    virtual void print() {
        cout << "Inside Parent Class." << endl;
    }
};

class child1 : public parent {
public:
    void print() {
        cout << "Inside child1 Class." << endl;
    }
};

class child2 : public parent {
public:
    void print() {
        cout << "Inside child2 Class." << endl;
    }
};

int main() {
    parent* ptr;

    child1 obj2;
    child2 obj3;

    ptr = &obj2;
    ptr->print();  
    ptr = &obj3;
    ptr->print();  

    return 0;
}