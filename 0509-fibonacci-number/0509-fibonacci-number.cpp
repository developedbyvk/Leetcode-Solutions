class Solution {
public:
    int fib(int n) {

        //...Recursive approach
        // if(n==0 || n==1){
        //     return n;
        // }

        // return fib(n-1)+fib(n-2);

        //...Dynamic Programming Approach
        if(n==0){
            return  0;
        }

        if(n==1){
            return 1;
        }

        vector<int> dp(n + 1);
        dp[0]=0;
        dp[1]=1;

        for(int i=2;i<n+1;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }

        return dp[n];

    }
};