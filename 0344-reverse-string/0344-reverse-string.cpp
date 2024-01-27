#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int n = s.size();
        std::vector<char> c(n);

        for (int i = n - 1, j = 0; i >= 0; i--, j++) {
            c[j] = s[i];
        }

        for (int i = 0; i < n; i++) {
            s[i] = c[i];
        }
    }
};
