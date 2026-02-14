// https://leetcode.com/problems/merge-sorted-array/description/
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int j = 0;                 
        int valid = m;            
        
        for (int i = 0; i < valid && j < n; i++) {
            
            if (nums2[j] <= nums1[i]) {
                
                
                for (int k = valid; k > i; k--) {
                    nums1[k] = nums1[k - 1];
                }
                
                nums1[i] = nums2[j];
                j++;
                valid++;            
            }
        }
        
        while (j < n) {
            nums1[valid] = nums2[j];
            valid++;
            j++;
        }
    }
};
