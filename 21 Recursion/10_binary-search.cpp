#include <iostream>
using namespace std;

bool binarySearch( int arr[], int s, int e, int key ) {
    if(s > e) return false;

    int mid = s + (e-s)/2;
    if(arr[mid] == key) return true;

    if( arr[mid] < key ) {
        return binarySearch(arr, mid+1, e, key);
    } else {
        return binarySearch(arr, s, mid-1, key);
    }
}

int main()
{
    int arr[6] = {23, 45, 65, 100, 102, 109};
    int key = 45;

    if(binarySearch(arr, 0, 5, key)) {
        cout << "Found";
    } else {
        cout << "Not Found";
    }

    return 0;
}