// https://www.naukri.com/code360/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1

#include <bits/stdc++.h> 
using namespace std;

void sort012(int *arr, int n)
{
    int left = 0, mid = 0, right = n - 1;

    while (mid <= right) {

        if (arr[mid] == 0) {
            swap(arr[mid], arr[left]);
            mid++;
            left++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { 
            swap(arr[mid], arr[right]);
            right--;
        }
    }
}
