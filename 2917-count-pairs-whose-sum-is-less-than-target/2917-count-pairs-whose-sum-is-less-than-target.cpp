class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        unsigned short answer = 0;
        unsigned char numsSize = nums.size();

        for (unsigned short i = 0; i < numsSize - 1; ++i)
            for (unsigned short j = i + 1; j < numsSize; ++j)
                if (nums[i] + nums[j] < target)
                    ++answer;

        return answer;
    }
};