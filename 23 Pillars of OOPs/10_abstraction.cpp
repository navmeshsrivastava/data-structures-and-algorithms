#include <iostream>
using namespace std;

class Car {
public:
    void start() {
        cout << "Car started" << endl;
    }
};

int main() {
    Car c;
    c.start();   // just use it
}