class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unsigned char answer = 0;

        for (unsigned char num : nums)
            if (num % 3)
                ++answer;

        return answer;                
    }
};