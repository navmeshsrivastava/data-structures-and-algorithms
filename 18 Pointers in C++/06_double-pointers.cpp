#include <iostream>
using namespace std;

void update(int **p2) {
    // p2 = p2+1;
    // change will not happen

    // *p2 = *p2 + 1;
    // change will happen at p

    **p2 = **p2 + 1;
    // change will happen at i

}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "p = " << p << endl;
    cout << "&p = " << &p << endl;
    cout << "p2 = " << p2 << endl;
    cout << "*p2 = " << *p2 << endl; 
    cout << "**p2 = " << **p2 << endl; 

    cout << "&i = " << &i << endl;
    cout << "p = " << p << endl;
    cout << "*p2 = " << *p2 << endl;

    cout << "&p = " << &p << endl;
    cout << "p2 = " << p2 << endl;


    cout << "i before = " << i << endl;
    cout << "p before = " << p << endl;
    cout << "p2 before = " << p2 << endl;

    update(p2);

    cout << "i after " << i << endl;
    cout << "p after " << p << endl;
    cout << "p2 after " << p2 << endl;


    return 0;
}