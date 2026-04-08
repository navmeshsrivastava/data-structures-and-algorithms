#include <iostream>
using namespace std;

inline int getMax( int a, int b ) {
    return a>b? a : b;
}

int main()
{
    int a = 9, b = 13;

    cout << "greater is " << getMax(a, b) << endl;

    a = a + 5;
    b = b - 1;

    cout << "greater is " << getMax(a, b) << endl;


    return 0;
}