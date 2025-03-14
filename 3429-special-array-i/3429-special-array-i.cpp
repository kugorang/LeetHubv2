class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        unsigned char loopEnd = nums.size() - 1;

        for (unsigned char i = 0; i < loopEnd; ++i)
        {
            if ((nums[i] % 2 == 0 && nums[i + 1] % 2 == 0)
            || (nums[i] % 2 == 1 && nums[i + 1] % 2 == 1))
                return false;
        }

        return true;
    }
};