class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        size_t numsSize = nums.size();

        for (size_t i = 0; i < k; ++i)
        {
            size_t minIndex = 0;

            for (size_t j = 1; j < numsSize; ++j)
                if (nums[minIndex] > nums[j])
                    minIndex = j;
            
            nums[minIndex] *= multiplier;
        }

        return nums;
    }
};