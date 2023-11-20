class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
      
        sort(nums.begin(),nums.end());
        int s=nums.size();
        
        int min =nums[0];
        int max=nums[s-1];
        
        cout<<"Min="<<min<<" "<<"Max="<<max<<endl;
        for(int i=0;i<s;i++){
        
            if(nums[i]!=min && nums[i]!=max){
                return nums[i];
            }
        
        }
        
        return -1;
    }
};