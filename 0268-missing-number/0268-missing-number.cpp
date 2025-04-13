class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int order = 0;

        for (auto &num : nums)
        {
            if (order != num)
                break;
            
            ++order;
        }

        return order;
    }
};