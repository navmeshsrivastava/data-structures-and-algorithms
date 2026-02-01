// https://www.naukri.com/code360/problems/allocate-books_1090540 

#include <vector>;
using namespace std;
int isPossible(vector<int> &arr, int n, int m, int mid) {
    int pageSum = 0, stdCount = 1;

    for ( int i = 0; i < n; i++ ) {
        if( pageSum + arr[i] <= mid ) {
            pageSum+=arr[i];
        } else {
            stdCount++;

            if( stdCount > m || arr[i] > mid ) {
                return false;
            }

            pageSum = arr[i];
        }
    }

    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    if (m > n) return -1;

    int sum = 0;

    for ( int i = 0; i < n; i++ ) {
        sum+=arr[i];
    }

    int s = 0, e = sum, ans = -1;
    

    while ( s <= e ) {
        int mid = s + ( e - s ) / 2;

        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        
    }
    return ans;
}