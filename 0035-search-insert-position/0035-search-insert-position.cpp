class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=nums.size();
        int flag=0,ans;

        for(int i=0;i<l;i++){
            if(target<=nums[i])
                return i;
        }

       return l;
    }
};