class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        unsigned short sLen = s.length();
        string answer(sLen, '\0');

        for (unsigned short i = 0; i < sLen; ++i)
            answer[indices[i]] = s[i];

        return answer;
    }
};