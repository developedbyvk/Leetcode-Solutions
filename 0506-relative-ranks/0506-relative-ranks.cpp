#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size());

        // Create a map to store the original indices of scores
        unordered_map<int, int> scoreIndexMap;

        // Populate the map with indices
        for (int i = 0; i < score.size(); i++) {
            scoreIndexMap[score[i]] = i;
        }

        // Sort the scores in descending order
        sort(score.rbegin(), score.rend());

        // Assign medals based on the sorted order
        for (int i = 0; i < score.size(); i++) {
            int originalIndex = scoreIndexMap[score[i]];

            if (i == 0) {
                ans[originalIndex] = "Gold Medal";
            } else if (i == 1) {
                ans[originalIndex] = "Silver Medal";
            } else if (i == 2) {
                ans[originalIndex] = "Bronze Medal";
            } else {
                ans[originalIndex] = to_string(i + 1);  // Convert the rank to string
            }
        }

        return ans;
    }
};
