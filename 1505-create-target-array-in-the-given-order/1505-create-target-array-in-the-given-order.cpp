class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        unsigned char numsSize = nums.size();

        vector<int> target;
        target.reserve(numsSize);

        vector<int>::iterator targetIt = target.begin();

        for (unsigned char i = 0; i < numsSize; ++i)
            target.insert(targetIt + index.at(i), nums.at(i));
            
        return target;
    }
};