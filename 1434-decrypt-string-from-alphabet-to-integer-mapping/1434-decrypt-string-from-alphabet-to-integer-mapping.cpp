class Solution {
public:
    string freqAlphabets(string s) {
        string answer;
        unsigned short sLength = s.length();

        for (unsigned short i = 0; i < sLength; ++i)
        {
            if (i + 2 < sLength && s[i + 2] == '#')
            {
                answer.push_back('a' + ((s[i] - '0') * 10 + (s[i + 1] - '1')));
                i += 2;
            }
            else
                answer.push_back('a' + s[i] - '1');
        }

        return answer;
    }
};