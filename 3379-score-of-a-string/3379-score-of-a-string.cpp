class Solution {
public:
    int scoreOfString(string s) {
        auto result = 0;
        auto i = 0;

        while (s[++i]) {
            if (s[i] > s[i - 1])
                result += (s[i] - s[i - 1]);
            else
                result += (s[i - 1] - s[i]);
        }

        return result;
    }
};