class Solution {
public:
    int scoreOfString(string s) {
        int result = 0;
        unsigned char strLen = s.length();

        for (unsigned char i = 1; i < strLen; ++i) {
            if (s[i] > s[i - 1])
                result += (s[i] - s[i - 1]);
            else
                result += (s[i - 1] - s[i]);
        }

        return result;
    }
};