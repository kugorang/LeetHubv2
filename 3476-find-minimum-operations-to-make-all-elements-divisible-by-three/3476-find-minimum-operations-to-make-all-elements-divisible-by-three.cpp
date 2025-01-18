class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unsigned char answer = 0;
        unsigned char numsSize = nums.size();

        for (unsigned char i = 0; i < numsSize; ++i)
            if (nums[i] % 3)
                ++answer;

        return answer;                
    }
};