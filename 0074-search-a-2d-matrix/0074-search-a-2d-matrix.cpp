class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n=matrix.size();
        int m = matrix[0].size();
        // cout<<"n==>"<<n<<"\t"<<"m==>"<<m<<endl;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }

        // return false;        //Time complexity ->>O(N*M)


        if(n==0)
        return false;

        if(m==0)
        return false;

        int low=0;
        int high=n*m-1;

        while(low<=high){
           int mid=(low+high)/2;
            int row=mid/m;
            int col=mid%m;

        if 
        (matrix[row][col] == target) 
            return true;
        else if 
        (matrix[row][col] < target) 
            low = mid + 1;
        else 
        high = mid - 1;
        }

        return false;           //TC=O(log(m*n))
    }
};


