class Solution {
public:
    string truncateSentence(string s, int k) {
        unsigned short spaceCount = 0;
        unsigned short answerIndex = 0;
        unsigned short sLength = s.length();

        for (unsigned short i = 0; i < sLength; ++i)
        {
            if (s[i] == ' ')
                if (++spaceCount == k)
                    return s.substr(0, answerIndex);
            ++answerIndex;
        }

        return s;
    }
};