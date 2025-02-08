class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int numsSize = nums.size();

        for (int i = 0; i < k; ++i)
        {
            int minIndex = 0;

            for (int j = 1; j < numsSize; ++j)
                if (nums[minIndex] > nums[j])
                    minIndex = j;
            
            nums[minIndex] *= multiplier;
        }

        return nums;
    }
};