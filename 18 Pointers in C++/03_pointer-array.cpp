#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2,8,4,5,6,7,8,90,1,1};

    cout << "address of the first memory block is " << arr << endl;
    cout << "address of the first memory block is " << &arr[0] << endl;
    cout << "*arr: " << *arr << endl;

    (*arr)++;

    cout << "arr[0]: " << *arr << endl;
    (*arr)+1;
    cout << "arr[0]: " << *arr << endl;

    cout << "*(arr + 1): " << *(arr + 1) << endl;

    int i = 2;
    cout << "i[arr]: " << i[arr] << endl;

    int *p = &arr[0];
    cout << "*(p+1): " << *(p + 1) << endl;

    cout << "sizeof(arr): " << sizeof(arr) << endl;
    cout << "sizeof(p): " << sizeof(p) << endl;
    cout << "sizeof(&p): " << sizeof(&p) << endl;

    return 0;
}