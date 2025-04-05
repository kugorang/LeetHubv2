class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int numsSize = nums.size();

        for (int i = 0; i < numsSize - 1; ++i)
            for (int j = i + 1; j < numsSize; ++j)
                if (nums[i] + nums[j] == target)
                    return {i, j};

        return {};
    }
};