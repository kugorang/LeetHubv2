class Solution {
public:
    int scoreOfString(string s) {
        int result = 0;
        int strLen = s.length();

        for (int i = 1; i < strLen; ++i) {
            int absDiff = s[i] - s[i - 1];

            if (absDiff < 0)
                absDiff *= -1;

            result += absDiff;
        }

        return result;
    }
};