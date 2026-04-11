#include <iostream>
using namespace std;

int partition ( int *arr, int s, int e ) {
    int pivot = arr[s];

    int count = 0;
    for ( int i = s+1; i <= e; i++ ) {
        if(pivot > arr[i] ) {
            count++;
        }
    }

    int pivotIndex = s+count;
    swap(arr[s], arr[pivotIndex]);
    int i = s, j = e;

    while ( i < pivotIndex && pivotIndex < j ) {
         if ( arr[i] < pivot ) {
            i++;
        }
        else if ( arr[j] > pivot ) {
            j--;
        }
        else {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort ( int *arr, int s, int e ) {
    if ( s >= e ) return;


    int idx = partition(arr, s, e );

    quickSort(arr, s, idx-1);
    quickSort(arr, idx+1, e);

}

int main()
{
    int arr[5] = { 4,1,3,5,2};

    quickSort( arr, 0, 4);

    for ( int i = 0; i < 5; i++ ) {
        cout << arr[i] << " ";
    }


    return 0;
}