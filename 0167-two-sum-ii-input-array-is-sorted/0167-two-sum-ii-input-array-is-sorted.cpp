#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s =numbers.size();
        int beg=0,end=s-1,csum;
        std::vector<int>ans;
        
//         for(int i=0;i<s;i++){
//             for(int j=i+1;j<s;j++){
//                 if(numbers[i]+numbers[j]==target){
//                     ans.push_back(i+1);
//                     ans.push_back(j+1);
//                     return ans;
//                 }
        
            
//             }
//         }
        
//         return ans;
        
        
        if(s==0){
            return ans;
        }else{
            while(beg<end){
                csum=numbers[beg]+numbers[end];
                
                if(csum==target){
                    ans.push_back(beg+1);
                    ans.push_back(end+1);
                    break;
                }else if(csum<target){
                    beg+=1;
                }else{
                    end-=1;
                }
            }
            
            return ans;
        }
        
        return ans;
        
        
        
    }
};