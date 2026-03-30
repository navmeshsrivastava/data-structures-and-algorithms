#include <iostream>
using namespace std;

// remember cout function behaves very differently for char.
int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch[5] = "pqrs";

    cout << "arr = " << arr << endl;
    cout << "ch = " << ch << endl;

    int *p = arr;
    cout << "p = " << p << endl;

    char *q = &ch[0];
    // print entire string
    cout << "q = " << q << endl;

    char temp = 's';
    char *r = &temp;
    cout << "r = " << r <<endl;

    return 0;
}