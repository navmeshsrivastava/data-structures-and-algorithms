#include <iostream>
using namespace std;

int b = 9;

int func1( int p ) {
    cout << "In func1, p = " << p << " and b = " << b << "." << endl;
}

int func2( int q ) {
    cout << " In func2, q = " << q << " and b = " << b << "." << endl;
}

int main()
{
    int a = 8;

    func1(a);

    func2(b);


    return 0;
}