#include <iostream>
using namespace std;

class Human {
    public:
        int height;
        int weight;
        int age;

    public:
        int getAge() {
            return age;
        }

        void setWeight(int w) {
            weight = w;
        };
};

class Male: public Human {
    public:
        string color;

    public:
        void sleep(){
            cout << "Male sleeping" << endl;
        }
};


int main()
{
    Male object1;
    cout << object1.height << endl;
    cout << object1.weight << endl;
    cout << object1.age << endl;
    cout << object1.color << endl;

    object1.setWeight(90);
    cout << object1.weight << endl;
    object1.sleep();

    return 0;
}