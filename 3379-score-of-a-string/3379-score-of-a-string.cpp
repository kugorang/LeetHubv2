class Solution {
public:
    int scoreOfString(string s) {
        unsigned short result = 0;
        size_t i = 0;

        while (s[++i]) {
            if (s[i] > s[i - 1])
                result += (s[i] - s[i - 1]);
            else
                result += (s[i - 1] - s[i]);
        }

        return result;
    }
};