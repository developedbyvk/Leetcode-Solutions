#include <vector>

class Solution {
public:
    int findSpecialInteger(std::vector<int>& arr) {
        int n = arr.size();
        int count = 1;  // Start count at 1 since the first element is considered.
        int ans = arr[0];  // Initialize ans with the first element.

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
                if (count > 0.25 * n) {
                    ans = arr[i];
                    break;  // Break out of the loop once the special integer is found.
                }
            } else {
                count = 1;  // Reset count for a new element.
            }
        }

        return ans;
    }
};
