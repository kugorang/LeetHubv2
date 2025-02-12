class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int numsSize = nums.size();
        vector<int> answer;
        answer.reserve(numsSize);

        for (int i = 0; i < numsSize; ++i)
        {
            int count = 0;

            for (int j = 0; j < numsSize; ++j)
                if (nums[i] > nums[j])
                    ++count;
            
            answer.push_back(count);
        }

        return answer;
    }
};