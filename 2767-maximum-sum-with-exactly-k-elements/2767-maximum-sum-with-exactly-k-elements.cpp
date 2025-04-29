class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());

        int answer = 0;

        for (int i = 0; i < k; ++i)
        {
            answer += nums[0];
            nums[0] += 1;
        }

        return answer;
    }
};