class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        bool ans=true;
        int s=nums.size();
        int count=0;
        
        sort(nums.begin(),nums.end());
        for(int i=1;i<s;i++){
            if(nums[i-1]==nums[i]){
                return true;
            }
            
           
        }
        return false;
        
        
    }
};