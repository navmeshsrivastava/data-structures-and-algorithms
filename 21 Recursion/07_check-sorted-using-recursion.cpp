#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    if (size == 0 || size == 1) 
    return true;
    
    if( arr[0] > arr[1] ) {
        return false;
    } else {
        return isSorted(arr+1, size-1);
    }
}

int main()
{
    int arr[6] = {2, 43, 88, 87, 88, 100};

    if(isSorted(arr, 6)) {
        cout << "Sorted" << endl;
    } else {
        cout << "Not sorted" << endl;
    }


    return 0;
}