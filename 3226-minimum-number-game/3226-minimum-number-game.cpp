class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> answer;

        sort(nums.begin(), nums.end());

        int numsSize = nums.size();

        for (int i = 0; i < numsSize; i += 2)
        {
            if (i + 1 == numsSize)
                answer.push_back(nums[i]);
            else
            {
                answer.push_back(nums[i + 1]);
                answer.push_back(nums[i]);
            }
        }

        return answer;
    }
};