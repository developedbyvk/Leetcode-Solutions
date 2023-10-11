#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> fullBloomFlowers(std::vector<std::vector<int>>& flowers, std::vector<int>& persons) {
        int n = flowers.size();
        std::vector<int> starts(n);
        std::vector<int> ends(n);

        for (int i = 0; i < n; i++) {
            starts[i] = flowers[i][0];
            ends[i] = flowers[i][1];
        }

        std::sort(starts.begin(), starts.end());
        std::sort(ends.begin(), ends.end());

        int m = persons.size();
        std::vector<int> ans(m);

        for (int i = 0; i < m; i++) {
            int x = binarySearch(starts, persons[i] + 1);
            int y = binarySearch(ends, persons[i]);
            ans[i] = x - y;
        }

        return ans;
    }

    int binarySearch(std::vector<int>& arr, int target) {
        int res = arr.size();
        int left = 0, right = arr.size() - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (arr[mid] >= target) {
                res = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return res;
    }
};
