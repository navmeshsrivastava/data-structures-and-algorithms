#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int key) {
    if ( size == 0 ) {
        return false;
    }
    return arr[0] == key ? true : isPresent(arr+1, size-1, key);
}

int main()
{
    int arr[6] = {32, 21, 99, 100, 101, 45};

    if(isPresent(arr, 6, 99)) {
        cout << "Present";
    } else {
        cout << "Not Found";
    }


    return 0;
}