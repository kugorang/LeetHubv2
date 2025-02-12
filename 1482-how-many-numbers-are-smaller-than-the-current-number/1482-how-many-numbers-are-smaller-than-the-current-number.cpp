class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int numsSize = nums.size();
        vector<int> answer(numsSize);

        for (int i = 0; i < numsSize; ++i)
        {
            int count = 0;

            for (int j = i + 1; j < numsSize; ++j)
            {
                if (nums[i] > nums[j])
                    answer[i] += 1;
                else if (nums[i] < nums[j])
                    answer[j] += 1;
            }
        }

        return answer;
    }
};