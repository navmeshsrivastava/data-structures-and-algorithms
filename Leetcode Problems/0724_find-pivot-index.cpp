#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int check = 0;
        for (int i = check; i < nums.size(); i++) {
            int leftSum = 0, rightSum = 0;

            for (int j = 0; j < check; j++) {
                leftSum += nums[j];
            }
            for (int j = check + 1; j < nums.size(); j++) {
                rightSum += nums[j];
            }

            if (leftSum == rightSum) {
                return check;
            }

            check++;
        }
        return -1;
    }
};
