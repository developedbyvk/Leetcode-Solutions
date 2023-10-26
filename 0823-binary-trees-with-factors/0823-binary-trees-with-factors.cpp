class Solution {
public:
    unordered_map<int,long long> answer;
    //unordered_map<int,bool> present;
    unordered_map<int,int> indexMap;
    long long mod = 1e9+7;
    vector<int> nums;

    long long solve(int index)
    {
        int num = nums[index];

        if(answer[num]!=0)
        {
            return answer[num];
        }

        long long tempans = 0;
        for(int i=0;i<index;i++)
        {
            if(num%nums[i]==0 && indexMap[num/nums[i]])
            {
                int left = nums[i];
                int right = num/nums[i];

                tempans = tempans+(solve(indexMap[left]-1)*solve(indexMap[right]-1));
            }
        }

        answer[num] = tempans+1;
        return answer[num]; 
    }
    int numFactoredBinaryTrees(vector<int>& arr) {
        nums = arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            indexMap[nums[i]] = i+1;
        }
        
        long long finalans = 0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(answer[nums[i]]==0)
            {
                long long ans = solve(i);
                finalans = (finalans+ans)%mod;
            }
            else
            {
                finalans = (finalans+answer[nums[i]])%mod;
            }
        }
        return (int)finalans;
    }
};