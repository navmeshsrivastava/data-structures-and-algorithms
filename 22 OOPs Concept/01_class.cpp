#include <iostream>
#include <cstring>
using namespace std;

class Hero {

    int health = 100;
    // char level;

    public:
        char level;
        char *name;

        Hero() {
            name = new char[100];
            cout << "Constructor called" << endl;
        };

        Hero(int health) {
            this->health = health;
            cout << "address of current object " << this << endl;
            cout << "parameterized constructor called." << endl;
        };

        Hero(int health, char level) {
            this -> health = health;
            this -> level = level;
        }

        // Copy Constructor
        Hero(Hero &temp) {
            // Deep Copy
            char *ch = new char[strlen(temp.name) + 1];
            strcpy(ch, temp.name);
            this -> name = ch;
            
            this -> health = 33;
            this -> level = 'M';
            cout << "copy constructor called." << endl;
        }

        void print() {
            cout << "level: " <<  level << endl;
            cout << "health: " <<  health << endl;
            cout << "name: " << name << endl;
        }
        
        int getHealth () {
            return health;
        }

        int getLevel() {
            return level;
        }

        void setHealth (int i) {
            health = i;
        }

        void setLevel (char ch, char wt ) {
            if(wt == 'C') level = ch;
        }

        void setName( char name[]) {
            strcpy(this->name, name);
        }
};

int main()
{
    Hero h1;
    h1.level = 'C';

    h1.setHealth(60);
    
    cout << "health: " << h1.getHealth() << endl;
    cout << "level: " << h1.level << endl;
    h1.setLevel('P', h1.level);
    cout << "level: " << h1.level << endl;
    cout << "size: " << sizeof(h1) << endl;
    
    // Dynamic Allocation
    Hero *h2 = new Hero; 
    
    (*h2).setHealth(60);
    h2->level = 'V';
    cout << "health: " << (*h2).getHealth() << endl;
    cout << "level: " << h2->level << endl;

    Hero h3(30);
    cout << "h3's health: " << h3.getHealth() << endl;
    cout << "address of h3: " << &h3 << endl;

    Hero h4(20, 'M');


    // Copy Constructor
    Hero h5(h4);

    
    h4.print();
    h5.print();

    Hero h6;
    h6.setHealth(99);
    h6.level = 'U';
    h6.setName("babbr");
    h6.print();
    
    return 0;
}