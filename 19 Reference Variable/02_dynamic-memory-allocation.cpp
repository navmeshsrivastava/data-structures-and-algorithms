#include <iostream>
using namespace std;

int getSum(int *arr, int n) {
    int sum = 0;
    for ( int i = 0; i < n; i++ ) {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int n;

    cout << "Enter no. of elements: " << endl;
    cin >> n;

    int *arr = new int[n];

    for ( int i = 0; i < n; i++ ) {
        cin >> arr[i];
    }

    cout << "The total sum of the elements in the array is "<< getSum(arr, n) << endl;

    return 0;
}