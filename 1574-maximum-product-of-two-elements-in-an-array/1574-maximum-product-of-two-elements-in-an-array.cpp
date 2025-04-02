class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxValue = INT_MIN;
        unsigned short numsSize = nums.size();

        for (unsigned short i = 0; i < numsSize - 1; ++i)
            for (unsigned short j = i + 1; j < numsSize; ++j)
                maxValue = max(maxValue, (nums[i] - 1) * (nums[j] - 1));

        return maxValue;
    }
};