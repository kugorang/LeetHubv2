class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int answer = 0;

        for (auto num : nums)
            if (num % 3)
                ++answer;

        return answer;                
    }
};