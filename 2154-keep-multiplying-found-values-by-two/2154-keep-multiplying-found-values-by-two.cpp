// class Solution {
// public:
//     int findFinalValue(vector<int>& nums, int original) {
        
//         int s=nums.size();
        
//         sort(nums.begin(),nums.end());
        
//         for(int i=0;i<s;i++){
//             if(nums[i]==original){
//                 original*=2;
                
//                 if(nums[i]<nums[s] && nums[i]==original){
//                     if(original==nums[s]){
//                         break;
//                     }
//                 }
//             }
//         }
        
//         return original;
        
//     }
// };


#include <vector>
#include <algorithm>

class Solution {
public:
    int findFinalValue(std::vector<int>& nums, int original) {
        int s = nums.size();

        // Sort nums in ascending order
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < s; i++) {
            if (nums[i] == original) {
                original *= 2;

                // Check if nums[i] is the last element and original is equal to nums[i]
                if (i == s - 1 && original == nums[i]) {
                    break;
                }
            }
        }

        return original;
    }
};
