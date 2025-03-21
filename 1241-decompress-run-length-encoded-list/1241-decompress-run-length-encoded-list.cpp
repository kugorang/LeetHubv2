class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        unsigned char numsSize = nums.size();
        unsigned char loopEnd = numsSize >> 1;
        vector<int> answer;
        answer.reserve(numsSize);

        for (unsigned char i = 0; i < loopEnd; i++)
            for (unsigned char j = 0; j < nums[2 * i]; ++j)
                answer.push_back(nums[2 * i + 1]);
        
        return answer;
    }
};