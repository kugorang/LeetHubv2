class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> newNums;

        int answer = 0;

        for (auto &num : nums)
        {
            if (num != val)
            {
                newNums.push_back(num);
                ++answer;
            }
        }

        nums = newNums;

        return answer;
    }
};