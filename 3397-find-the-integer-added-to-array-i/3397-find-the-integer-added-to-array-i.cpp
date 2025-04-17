class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        unsigned char numsSize = nums2.size();
        int sum = 0;

        for (unsigned char i = 0; i < numsSize; ++i)
            sum += nums2[i] - nums1[i];
        
        return sum / numsSize;
    }
};