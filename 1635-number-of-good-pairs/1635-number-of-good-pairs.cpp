class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int numsLen = nums.size();
        int goodCount = 0;

        for (int i = 0; i < numsLen - 1; ++i)
            for (int j = i + 1; j < numsLen; ++j)
                if (nums[i] == nums[j])
                    ++goodCount;

        return goodCount;
    }
};