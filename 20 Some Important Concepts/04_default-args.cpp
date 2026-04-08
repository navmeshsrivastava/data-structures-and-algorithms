#include <iostream>
using namespace std;

void printArr(int arr[], int size, int start = 0 ) {
    for ( int i = start; i < size; i++ ){
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9 };

    printArr(arr, 9);
    cout << endl;
    printArr(arr, 9, 3);

    return 0;
}