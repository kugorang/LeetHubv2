class Solution {
public:
    int minOperations(vector<int>& nums) {
        int numsSize = nums.size();
        int answer = 0;

        for (int i = 0; i < numsSize - 1; ++i)
        {
            if (nums[i] >= nums[i + 1])
            {
                int gap = nums[i] - nums[i + 1] + 1;
                nums[i + 1] += gap;
                answer += gap;
            }
        }

        return answer;
    }
};