class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxValue = -1;

        for (auto &num : nums)
            if (num > maxValue)
                maxValue = num;

        int answer = 0;

        for (unsigned char i = 0; i < k; ++i)
        {
            answer += maxValue;
            ++maxValue;
        }

        return answer;
    }
};