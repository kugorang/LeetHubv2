class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;
        answer.reserve(nums.size() << 1);

        for (auto &num : nums)
        {
            string str = to_string(num);

            for (auto &ch : str)
                answer.push_back(ch - '0');
        }

        return answer;
    }
};