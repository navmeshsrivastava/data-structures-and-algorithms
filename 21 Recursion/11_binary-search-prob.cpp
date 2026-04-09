// https://www.naukri.com/code360/problems/binary-search_972?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11

#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int s, int e, int key ) {
    if(s > e) return -1;

    int mid = s + (e-s)/2;
    if(arr[mid] == key) return mid;

    if( arr[mid] < key ) {
        return binarySearch(arr, mid+1, e, key);
    } else {
        return binarySearch(arr, s, mid-1, key);
    }
}

int search(vector<int> &nums, int target) {
    return binarySearch(nums, 0, nums.size()-1, target);
}