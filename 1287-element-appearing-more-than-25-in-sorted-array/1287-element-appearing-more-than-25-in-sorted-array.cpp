#include <vector>

class Solution {
public:
    int findSpecialInteger(std::vector<int>& arr) {
        int n = arr.size();
        int count = 1;
        int ans = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
                if (count > 0.25 * n) {
                    ans = arr[i];
                    break;
                }
            } else {
                count = 1;
            }
        }

        return ans;
    }
};
