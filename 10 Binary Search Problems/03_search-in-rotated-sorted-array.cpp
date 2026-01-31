// https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <vector>
using namespace std;

int findPivot (vector <int> &arr, int n ) {
    int s = 0, e = n - 1;
    while( s<e ) {
        int mid = s + (e-s)/2;
        if ( arr[mid] >= arr[0] ) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int binarySearch ( vector <int> &arr, int s, int e, int k) {
    int start = s, end = e;
    while (start <= end) {
        int mid = start + (end-start)/2;
        if ( arr[mid] > k ) {
            end = mid - 1;
        } else if ( arr[mid] < k ) {
            start = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
   int pivot = findPivot(arr, n);
   
   if ( k >= arr[pivot] && k <= arr[n-1]) {
       return binarySearch(arr, pivot, n-1, k);
   } else {
       return binarySearch(arr, 0, pivot -1, k );
   }
   

}
