class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int numsSize = nums.size();
        int loopEnd = numsSize >> 1;
        vector<int> answer;
        answer.reserve(numsSize);

        for (int i = 0; i < loopEnd; i++)
            for (int j = 0; j < nums[2 * i]; ++j)
                answer.push_back(nums[2 * i + 1]);
        
        return answer;
    }
};