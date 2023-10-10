class Solution {
public:
    int minOperations(vector<int>& nums) {
        
//         sort(nums.begin(),nums.end());
        
//         int op=0;
        
//          for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] <= nums[i - 1]) {
//                 op += nums[i - 1] - nums[i] + 1;
//                 nums[i] = nums[i - 1] + 1;
//             }
//         }
        
        
//         return op;
        
        
        int n=nums.size();
        int ans=n-1;
        sort(nums.begin(), nums.end());
        auto it=unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        int m=nums.size(), k=n-m;
   


        for(int i=0, j=0; i<m; i++){
            while(j<m && nums[j]<nums[i]+n)
            {
                j++;
            }
            ans=min(ans, n-j+i);
        }  
        return ans;
    }
};


