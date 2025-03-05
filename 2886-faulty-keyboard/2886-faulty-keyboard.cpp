class Solution {
public:
    string finalString(string s) {
        unsigned char sLength = s.length();
        string answer;
        answer.reserve(sLength);

        for (unsigned char i = 0; i < sLength; ++i)
        {
            if (s[i] == 'i')
            {
                unsigned char answerLength = answer.length();
                unsigned char loopEnd = answerLength >> 1;

                for (unsigned char j = 0; j < loopEnd; ++j)
                {
                    unsigned char temp = answer[j];
                    answer[j] = answer[answerLength - 1 - j];
                    answer[answerLength - 1 - j] = temp;
                }
            }
            else
                answer.push_back(s[i]);
        }

        return answer;
    }
};