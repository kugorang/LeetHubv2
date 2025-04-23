class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(heights);
        sort(expected.begin(), expected.end());

        unsigned char loopEnd = expected.size();
        int answer = 0;

        for (unsigned char i = 0; i < loopEnd; ++i)
            if (heights[i] != expected[i])
                ++answer;
        
        return answer;
    }
};