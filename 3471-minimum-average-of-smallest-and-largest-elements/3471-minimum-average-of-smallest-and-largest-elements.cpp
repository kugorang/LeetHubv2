class Solution {
public:
    double minimumAverage(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        unsigned char numsSize = nums.size();
        
        vector<double> averages;
        averages.reserve(numsSize >> 1);
        
        unsigned char loopEnd = numsSize >> 1;

        for (int i = 0; i < loopEnd; ++i)
            averages.push_back((double)(nums[i] + nums[numsSize - 1 - i]) / 2);

        sort(averages.begin(), averages.end());

        return averages[0];
    }
};