class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int s1=mat.size();
        int s2=target.size();
     

        if(s1!=s2){
            return false;
        }

        for(int i=0;i<4;i++){
            if(mat==target){
            return true;
            }



        for(int i=0;i<s1;i++){
            for(int j=i+1;j<s1;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }

        for(int i=0;i<s1;i++){
            reverse(mat[i].begin(),mat[i].end());
        }

        // for(int i=0;i<s1;i++){
        //     for(int j=0;j<s1;j++){
        //         cout<<mat[i][j];
        //     }
        //     cout<<endl;
        }

        

        return false;
    }
};