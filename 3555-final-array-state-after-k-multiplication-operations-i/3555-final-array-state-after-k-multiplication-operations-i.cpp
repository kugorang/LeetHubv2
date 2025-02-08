class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        size_t numsSize = nums.size();
        size_t minIndex = 0;
        size_t j;

        for (size_t i = 0; i < k; ++i)
        {
            minIndex = 0;

            for (j = 1; j < numsSize; ++j)
                if (nums[minIndex] > nums[j])
                    minIndex = j;
            
            nums[minIndex] *= multiplier;
        }

        return nums;
    }
};