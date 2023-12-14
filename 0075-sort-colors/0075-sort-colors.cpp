class Solution {
public:
    void sortColors(vector<int>& nums) {
        
       // sort(nums.begin(), nums.end());
        int s=nums.size();
       int temp;

       for(int i=0;i<s;i++){
           for(int j=i+1;j<s;j++){
               if(nums[i]>nums[j]){
                   temp=nums[j];
                   nums[j]=nums[i];
                   nums[i]=temp;
               }
           }
       }
        
   
    }
};