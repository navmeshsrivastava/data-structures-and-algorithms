#include <iostream>
using namespace std;

int findPivot(int arr[], int size) {
    int s = 0, e = size - 1;
    while (s<e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
    
}

int main()
{
    int arr[6] = {65, 90, 10, 15, 16, 18};


    cout << "Pivot Index of the array is " << findPivot(arr, 6) << endl;

    return 0;
}