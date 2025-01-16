class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unsigned char numsSize = nums.size();

        vector<bool> arr(numsSize, false);

        vector<int> answer;
        answer.reserve(numsSize);

        for (auto num : nums)
        {
            if (!arr[num])
                arr[num] = true;
            else
                answer.push_back(num);
        }

        return answer;
    }
};