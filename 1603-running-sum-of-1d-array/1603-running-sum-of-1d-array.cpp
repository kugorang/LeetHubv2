class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int numsSize = nums.size();
        
        vector<int> result;
        result.reserve(numsSize);
        result.push_back(nums[0]);

        for (int i = 1; i < numsSize; ++i)
            result.push_back(result[i - 1] + nums[i]);

        return result;
    }
};