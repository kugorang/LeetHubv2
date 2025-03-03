class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unsigned char numsSize = nums.size();
        int answer = 0;

        for (unsigned char i = 0; i < numsSize - 2; ++i)
            for (unsigned char j = i + 1; j < numsSize - 1; ++j)
                for (unsigned char k = j + 1; k < numsSize; ++k)
                    if (nums[j] - nums[i] == diff && nums[k] - nums[j] == diff)
                        ++answer;

        return answer;
    }
};