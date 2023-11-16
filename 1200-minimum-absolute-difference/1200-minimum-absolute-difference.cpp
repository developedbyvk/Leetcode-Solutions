class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<vector<int>> v;
        int mini = INT_MAX;

        for (int i = 0; i < arr.size() - 1; i++)
        {
            mini = min(abs(arr[i + 1] - arr[i]), mini);
        }

        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i + 1] - arr[i] == mini)
            {
                v.push_back({arr[i], arr[i + 1]});
            }
        }
        return v;
    }
};