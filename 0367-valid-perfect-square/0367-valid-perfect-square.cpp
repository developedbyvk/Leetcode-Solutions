class Solution {
public:
    bool isPerfectSquare(int num) {
        long long root=1;
        if(num<0)
            return false;
        
        while(root<=num/root){
            if(root*root==num){
                return true;
            }else{
                root++;
            }
        }
        
        return false;
    }
};