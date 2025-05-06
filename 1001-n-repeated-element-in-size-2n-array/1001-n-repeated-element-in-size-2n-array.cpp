class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> us;

        for (const auto &num : nums)
        {
            if (us.find(num) != us.end())
                return num;
            
            us.insert(num);
        }

        return -1;
    }
};