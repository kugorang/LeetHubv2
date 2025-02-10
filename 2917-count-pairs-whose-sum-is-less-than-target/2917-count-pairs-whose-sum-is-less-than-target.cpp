class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int answer = 0;
        int numsSize = nums.size();

        for (int i = 0; i < numsSize - 1; ++i)
            for (int j = i + 1; j < numsSize; ++j)
                if (nums[i] + nums[j] < target)
                    ++answer;

        return answer;
    }
};