// class Solution {
// public:
//      static bool compareOnes(int a, int b) {
//         int count_a = __builtin_popcount(a);  
//         int count_b = __builtin_popcount(b); 
    
//         if (count_a == count_b) {
//             return a < b;
//         }
        
       
//         return count_a < count_b;
//     }

//     vector<int> sortByBits(vector<int>& arr) {
    
//         sort(arr.begin(), arr.end(), compareOnes);
//         return arr;
//     }
// };



class Solution {
public:
    
    int countOnes(int n) {
        int count = 0;
        while (n > 0) {
            if (n & 1) {
                count++;
            }
            n >>= 1;
        }
        return count;
    }

    static bool compareOnes(int a, int b) {
        Solution s;
        int count_a = s.countOnes(a);
        int count_b = s.countOnes(b);
        
   
        if (count_a == count_b) {
            return a < b;
        }
        
    
        return count_a < count_b;
    }

    vector<int> sortByBits(vector<int>& arr) {
   
        sort(arr.begin(), arr.end(), compareOnes);
        return arr;
    }
};
