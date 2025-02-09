class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int numsSize = nums.size();

        vector<int> leftSum, rightSum;
        leftSum.reserve(numsSize);
        leftSum.push_back(0);

        rightSum.reserve(numsSize);
        rightSum.push_back(0);

        for (int i = 1; i < numsSize; ++i)
        {
            leftSum.push_back(leftSum[i - 1] + nums[i - 1]);
            rightSum.push_back(rightSum[i - 1] + nums[numsSize - i]);
        }

        vector<int> answer;
        answer.reserve(numsSize);

        for (int i = 0; i < numsSize; ++i)
            answer.push_back(abs(leftSum[i] - rightSum[numsSize - 1 - i]));

        return answer;
    }
};