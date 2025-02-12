class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        short numsSize = nums.size();
        vector<int> answer(numsSize);

        for (short i = 0; i < numsSize - 1; ++i)
        {
            for (short j = i + 1; j < numsSize; ++j)
            {
                if (nums[i] > nums[j])
                    ++answer[i];
                else if (nums[i] < nums[j])
                    ++answer[j];
            }
        }

        return answer;
    }
};