#include <iostream>
using namespace std;

int main()
{
    int num = 9;

    int *ptr = &num;

    int *ptr1 = 0;

    ptr1 = &num;

    cout << "value of num is: " << num << endl;
    cout << "value of num is: " << *ptr << endl;
    cout << "address stored at pointer ptr is " << ptr << endl;
    cout << "address stored at pointer ptr1 is " << ptr1 << endl;
    cout << "address of num is: " << &num << endl;
    cout << "size of pointer ptr is " << sizeof(ptr) << endl;

    (*ptr1)++;
    cout << num << endl;
    (*ptr)++;
    cout << num << endl;

    

    return 0;
}