class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        answer.reserve(2);

        int numsSize = nums.size();

        for (int i = 0; i < numsSize - 1; ++i)
        {
            bool found = false;

            for (int j = i + 1; j < numsSize; ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    found = true;
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            }

            if (found)
                break;
        }

        return answer;
    }
};