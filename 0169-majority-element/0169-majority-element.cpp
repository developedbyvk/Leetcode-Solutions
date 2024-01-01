class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n=nums.size();

        // for(int i=0;i<n;i++){
        //     int count=0;

        //     for(int j=0;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }


        //     if(count>n/2){
        //         return nums[i];
        //     }
        // }
        
        // return -1;

        int start=nums[0];
        int count=1;

        for(int i=1;i<n;i++){
            if(nums[i]==start){
                count++;
            }else{
                count--;
                if(count==0){
                    start=nums[i];
                    count=1;
                }
            }
        }

        return start;

    }
};