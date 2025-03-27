class Solution {
public:
    int maxDepth(string s) {
        unsigned char maximumDepth = 0;
        unsigned char currentDepth = 0;

        for (auto &ch : s)
        {
            if (ch == '(')
            {
                ++currentDepth;
                maximumDepth = max(maximumDepth, currentDepth);
            }
            else if (ch == ')')
                --currentDepth;
        }
        
        return maximumDepth;
    }
};