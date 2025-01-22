class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> answer;
        answer.reserve(n << 1);

        for (int i = 0; i < n; ++i)
        {
            answer.push_back(nums[i]);
            answer.push_back(nums[n + i]);
        }

        return answer;
    }
};