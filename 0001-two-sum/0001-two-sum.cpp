class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        answer.reserve(2);

        unsigned short numsSize = nums.size();

        for (unsigned short i = 0; i < numsSize - 1; ++i)
        {
            for (unsigned short j = i + 1; j < numsSize; ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            }
        }

        return answer;
    }
};