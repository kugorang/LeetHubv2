class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(nums);
        result.reserve(nums.size() << 1);

        for (auto num : nums)
            result.push_back(num);
        
        return result;
    }
};