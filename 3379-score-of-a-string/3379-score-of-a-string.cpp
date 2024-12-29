class Solution {
public:
    int scoreOfString(string s) {
        unsigned short result = 0;
        size_t i = 0;

        while (s[++i])
            result += abs(s[i] - s[i - 1]);

        return result;
    }
};