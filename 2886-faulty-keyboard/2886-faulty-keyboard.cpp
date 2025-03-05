class Solution {
public:
    string finalString(string s) {
        int sLength = s.length();
        string answer;
        answer.reserve(sLength);

        for (int i = 0; i < sLength; ++i)
        {
            if (s[i] == 'i')
            {
                int answerLength = answer.length();
                int loopEnd = answerLength >> 1;

                for (int j = 0; j < loopEnd; ++j)
                {
                    char temp = answer[j];
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