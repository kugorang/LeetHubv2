class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int answer = 0;
        int numsSize = nums.size();

        for (int i = 0 ; i < numsSize - 1; ++i)
        {
            for (int j = i + 1; j < numsSize; ++j)
                if (abs(nums[i] - nums[j]) == k)
                    ++answer;
        }

        return answer;
    }
};