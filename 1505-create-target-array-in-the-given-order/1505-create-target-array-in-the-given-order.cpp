class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int numsSize = nums.size();

        vector<int> target;
        target.reserve(numsSize);
        
        vector<int>::iterator targetIt = target.begin();

        for (int i = 0; i < numsSize; ++i)
            target.insert(targetIt + index.at(i), nums.at(i));
            
        return target;
    }
};