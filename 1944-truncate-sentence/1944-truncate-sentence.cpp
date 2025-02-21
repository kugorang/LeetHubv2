class Solution {
public:
    string truncateSentence(string s, int k) {
        int spaceCount = 0;
        int sSize = 0;

        for (auto &ch : s)
        {
            if (ch == ' ')
                if (++spaceCount == k)
                    return s.substr(0, sSize);
            ++sSize;
        }

        return s;
    }
};