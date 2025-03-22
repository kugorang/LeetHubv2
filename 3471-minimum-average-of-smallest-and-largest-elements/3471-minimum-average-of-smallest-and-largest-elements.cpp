class Solution {
public:
    double minimumAverage(vector<int>& nums)
    {
        int numsSize = nums.size();
        vector<double> averages;
        averages.reserve(numsSize >> 1);

        while (numsSize > 0)
        {
            double max = 0;
            double min = 51;

            int minIndex = -1;

            for (int i = 0; i < numsSize; ++i)
            {
                if (min > nums[i])
                {
                    min = nums[i];
                    minIndex = i;
                }

                if (nums[i] > max)
                    max = nums[i];
            }

            averages.push_back((min + max) / 2);

            nums.erase(nums.begin() + minIndex);
            nums.erase(find(nums.begin(), nums.end(), max));

            numsSize -= 2;
        }

        sort(averages.begin(), averages.end());

        return averages[0];
    }
};