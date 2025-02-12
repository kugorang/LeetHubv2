class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unsigned short numsSize = nums.size();
        vector<int> answer;
        answer.reserve(numsSize);

        for (unsigned short i = 0; i < numsSize; ++i)
        {
            unsigned short count = 0;

            for (unsigned short j = 0; j < numsSize; ++j)
                if (nums[i] > nums[j])
                    ++count;
            
            answer.push_back(count);
        }

        return answer;
    }
};