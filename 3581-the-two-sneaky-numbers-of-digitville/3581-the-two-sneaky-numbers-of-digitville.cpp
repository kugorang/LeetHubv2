class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> answer;
        answer.reserve(nums.size());

        bool arr[101] = { false, };

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