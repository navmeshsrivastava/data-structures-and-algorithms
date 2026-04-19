#include <vector>
using namespace std;

class Solution {
private:
    vector<vector<int>> subset(vector<vector<int>> subsets, vector<int>& nums, int idx) {
        if (idx >= nums.size()) return subsets;

        int element = nums[idx];
        vector<vector<int>> copy;

        for (int i = 0; i < subsets.size(); i++) {
            copy.push_back(subsets[i]);

            vector<int> temp = subsets[i];
            temp.push_back(element);
            copy.push_back(temp);
        }

        return subset(copy, nums, idx + 1);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        subsets.push_back({}); 

        return subset(subsets, nums, 0);
    }
};

// ************************************************************************************


class Solution {
    private:
    void solve ( vector<int> nums, vector<int> output, int idx, vector<vector<int>> &ans) {
        // base case
        if(idx >= nums.size() ) {
            ans.push_back(output);
            return;
        }

        // exclude
        solve(nums, output, idx+1, ans);
        
        // include
        int element = nums[idx];
        output.push_back(element);
        solve (nums, output, idx+1, ans);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        
        solve(nums, output, 0, ans);

        return ans;
    }
};