#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size());

      
        unordered_map<int, int> scoreIndexMap;


        for (int i = 0; i < score.size(); i++) {
            scoreIndexMap[score[i]] = i;
        }

     
        sort(score.rbegin(), score.rend());

      
        for (int i = 0; i < score.size(); i++) {
            int originalIndex = scoreIndexMap[score[i]];

            if (i == 0) {
                ans[originalIndex] = "Gold Medal";
            } else if (i == 1) {
                ans[originalIndex] = "Silver Medal";
            } else if (i == 2) {
                ans[originalIndex] = "Bronze Medal";
            } else {
                ans[originalIndex] = to_string(i + 1);  
            }
        }

        return ans;
    }
};
