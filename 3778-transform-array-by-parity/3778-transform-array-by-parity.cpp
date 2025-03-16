class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for (auto &num : nums)
            num %= 2;

        sort(nums.begin(), nums.end());
        
        return nums;
    }
};