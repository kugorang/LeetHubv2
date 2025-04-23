class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(heights);
        sort(expected.begin(), expected.end());

        int loopEnd = expected.size();
        int answer = 0;

        for (int i = 0; i < loopEnd; ++i)
            if (heights[i] != expected[i])
                ++answer;
        
        return answer;
    }
};