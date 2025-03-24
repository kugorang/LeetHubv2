class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int answer = 0;
        unsigned char numsSize = nums.size();

        for (unsigned char i = 0 ; i < numsSize - 1; ++i)
        {
            for (unsigned char j = i + 1; j < numsSize; ++j)
                if (abs(nums[i] - nums[j]) == k)
                    ++answer;
        }

        return answer;
    }
};