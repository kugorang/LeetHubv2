class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int numsLen = nums.size();

        vector<int> result(nums);
        result.reserve(numsLen << 1);

        for (auto num : nums)
            result.push_back(num);
        
        return result;
    }
};