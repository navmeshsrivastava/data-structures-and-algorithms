#include <iostream>
using namespace std;

// We use extra arrays because during merging we overwrite the original array, and without copying, we would lose elements that are still needed for comparison.

void merge( int *arr, int s, int e ) {
    int mid = s + ( e-s )/2;

    int len1 = mid - s+1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int arr1 = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[arr1++];
    }

    int arr2 = mid+1;

    for ( int i = 0; i < len2; i++ ) {
        second[i] = arr[arr2++];
    }

    // merging two sorted arrays

    int idxForMainArray = s;
    int idx1 = 0;
    int idx2 = 0;

    while ( idx1 < len1 && idx2 < len2 ) {
        if ( first[idx1] < second[idx2] ) {
            arr[idxForMainArray++] = first[idx1++];
        } else {
            arr[idxForMainArray++] = second[idx2++];
        }

    }

    while ( idx1 < len1 ) {
            arr[idxForMainArray++] = first[idx1++];
        }

        while ( idx2 < len2 ) {
            arr[idxForMainArray++] = second[idx2++];
        }

        delete []first;
        delete []second;

}

void mergeSort(int arr[], int s, int e) {
    if(s>=e) return;
    int mid = s + ( e - s ) / 2;


    mergeSort(arr, s, mid);

    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[6] = { 32, 11, 67, 90, 0, 21};

    mergeSort( arr, 0, 5);

    for ( int i = 0; i < 6; i++ ) {
        cout << arr[i] << " ";
    }


    return 0;
}