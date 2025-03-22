class Solution {
public:
    double minimumAverage(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        unsigned char numsSize = nums.size();
        
        vector<double> averages;
        averages.reserve(numsSize >> 1);

        while (numsSize > 0)
        {
            averages.push_back((double)(nums[0] + nums[numsSize - 1]) / 2);

            nums.erase(nums.begin() + numsSize - 1);
            nums.erase(nums.begin());

            numsSize -= 2;
        }

        sort(averages.begin(), averages.end());

        return averages[0];
    }
};