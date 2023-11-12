class Solution {
public:
    bool judgeSquareSum(int c) {
        long long sum=0;
        
        if(c<0)
            return false;
        else {
            for (long long  a = 0; a * a <= c; a++) {
                long long b = static_cast<int>(sqrt(c - a * a));
                sum = a * a + b * b;

                if (sum == c) {
                    return true;
                }
            }
        }
        
        return false;
    }
};