class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unsigned char numsSize = nums.size();

        vector<int> answer;
        answer.reserve(numsSize);

        vector<bool> arr(numsSize, false);

        for (auto num : nums)
        {
            if (arr[num])
                answer.push_back(num);
            else
                arr[num] = true;
        }

        return answer;
    }
};