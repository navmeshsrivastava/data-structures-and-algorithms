// https://www.naukri.com/code360/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <vector>
#include <bits/stdc++.h> 
using namespace std;

bool isPossible(vector<int> &stalls, int k, int n, int mid) {
    int lastPosition = stalls[0];
    int cowsCount = 1;

    for ( int i = 0; i < n; i++ ) {
        if(stalls[i] - lastPosition >= mid ) {
            cowsCount++;
            if(cowsCount == k) {
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
   int n = stalls.size();
   sort(stalls.begin(), stalls.end());
   int s = 0, e = stalls[n-1];
   int ans = -1;

   while ( s<=e) {
       int  mid = s + ( e-s )/2;
       if(isPossible(stalls, k, n, mid)) {
           ans = mid;
           s = mid+1;
       } else {
           e = mid - 1;
       }
   }

   return ans;

}