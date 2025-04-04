class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        unsigned char numsSize = nums.size();
        unsigned char loopEnd = numsSize >> 1;
        vector<int> answer;

        for (unsigned char i = 0; i < loopEnd; i++)
            for (unsigned char j = 0; j < nums[i << 1]; ++j)
                answer.push_back(nums[(i << 1) + 1]);
        
        return answer;
    }
};