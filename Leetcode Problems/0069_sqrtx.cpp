// https://leetcode.com/problems/sqrtx/description/

class Solution {
public:

    int binarySearch ( int n ) {
        int s = 0, e = n, ans;

        while ( s <= e ) {
            long long int mid = s + (e-s)/2;

            long  long int sqrt = mid*mid;
            if(sqrt == n) {
                return mid;
            }

            if ( sqrt > n) {
                e = mid -1;
            } else {
                ans = mid;
                s = mid + 1;
            }
        }
        return ans;
    }
    int mySqrt(int x) {
        return binarySearch(x);
    }
};