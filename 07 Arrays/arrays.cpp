#include <iostream>
using namespace std;

int main()
{
    int num[3] = { 3, 8, 1};

    int num1[3] = {0}; // This will have 0 value across all the indices. And it's only valid for 0 not for any other number.

    int num2[3];  // All the indices have some garbage value.

    int num3[15] = { 2, 8 }; // This will have all the values 0 after index 1.

    cout << "Size of array num3 = " << sizeof(num3)/sizeof(int) << endl;  //This is used to get size of the array.

    return 0;
}