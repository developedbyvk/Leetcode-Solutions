class Solution {
public:
    int integerBreak(int n) {
        // if (n <= 3) 
        // return n - 1;
        // int quotient = n / 3, remainder = n % 3;
        // if (remainder == 0) 
        // return pow(3, quotient);
        // if (remainder == 1) 
        // return pow(3, quotient - 1) * 4;


        
        // return pow(3, quotient) * 2;

        if(n==2) return 1;
        if(n==3) return 2;
        int x = n/3;
        if(n%3==0) return pow(3,x);
        else if((n-1)%3==0) return pow(3,x-1)*4;
        else return pow(3,x)*2; 
    }
};