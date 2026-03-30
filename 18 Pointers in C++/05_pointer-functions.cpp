#include <iostream>
using namespace std;

void print(int *p) {
    cout << *p << endl;
}

void update(int *p) {
    p = p+1;
    cout << "ptr inside function = " << p << endl;
}

int getSum ( int arr[], int n ) {
    // there no difference between passing as int arr[] or intr *ptr because int arr[] also passes the address that is arr
    cout <<"sizeof(arr) = " << sizeof(arr) <<endl;
    int sum = 0;
    for(int i = 0; i < n; i++ ) {
        sum+=arr[i];
    }

    return sum;
}

int main()
{
    int num = 5;
    int *ptr = &num;
    print(ptr);

    cout << "ptr before = " << ptr << endl;
    update(ptr);
    cout << "ptr after " << ptr << endl;
    ptr = ptr+1;
    cout << "ptr after doing +1 in main() " << ptr << endl;

    int arr[5] = {1,2,3,4,5};

    cout << getSum(arr, 5) << endl;
    // we can also pass as getSum(arr+3, 2) 
    cout << getSum(arr+2, 3) << endl;

    return 0;
}