#include <vector>
#include <algorithm>

class Solution {
public:
    int findFinalValue(std::vector<int>& nums, int original) {
        int s = nums.size();


        sort(nums.begin(), nums.end());

        for (int i = 0; i < s; i++) {
            if (nums[i] == original) {
                original *= 2;

   
                if (i == s - 1 && original == nums[i]) {
                    break;
                }
            }
        }

        return original;
    }
};
