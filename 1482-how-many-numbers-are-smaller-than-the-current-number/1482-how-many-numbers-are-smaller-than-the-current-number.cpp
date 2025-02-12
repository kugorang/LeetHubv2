class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unsigned short numsSize = nums.size();
        vector<int> answer(numsSize);

        for (unsigned short i = 0; i < numsSize - 1; ++i)
        {
            for (unsigned short j = i + 1; j < numsSize; ++j)
            {
                if (nums[i] == nums[j])
                    continue;

                if (nums[i] > nums[j])
                    ++answer[i];
                else if (nums[i] < nums[j])
                    ++answer[j];
            }
        }

        return answer;
    }
};