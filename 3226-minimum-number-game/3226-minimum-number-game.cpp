class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        unsigned char numsSize = nums.size();

        vector<int> answer;
        answer.reserve(numsSize);

        sort(nums.begin(), nums.end());

        for (unsigned char i = 0; i < numsSize; i += 2)
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