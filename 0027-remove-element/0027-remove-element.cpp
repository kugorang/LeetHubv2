class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> newNums;
        newNums.reserve(nums.size());

        int answer = 0;

        for (int &num : nums)
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