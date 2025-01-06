class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int numsLen = nums.size();
        vector<int> ans;
        ans.reserve(numsLen);

        for (int i = 0; i < numsLen; ++i)
            ans.push_back(nums[nums[i]]);

        return ans;
    }
};