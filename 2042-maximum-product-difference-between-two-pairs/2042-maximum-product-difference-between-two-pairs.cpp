class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int numsSize = nums.size();

        return (nums[numsSize - 1] * nums[numsSize - 2]) - (nums[0] * nums[1]);
    }
};