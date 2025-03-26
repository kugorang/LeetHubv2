class Solution {
public:
    unsigned short GetSumOfDigits(unsigned short num)
    {
        unsigned short sum = 0;

        while (num > 0)
        {
            sum += (num % 10);
            num /= 10;
        }

        return sum;
    }

    int minElement(vector<int>& nums) {
        for (auto &num : nums)
            num = GetSumOfDigits(num);
            
        sort(nums.begin(), nums.end());

        return nums[0];
    }
};