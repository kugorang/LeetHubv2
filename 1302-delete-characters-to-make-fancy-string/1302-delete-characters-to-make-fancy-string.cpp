class Solution {
public:
    string makeFancyString(string s) {
        int answerIndex = 0;

        int sLen = s.length();
        string answer;
        answer.reserve(sLen);
        
        int targetCount = 0;
        char targetCh;

        for (int i = 0; i < sLen; ++i)
        {
            char ch = s[i];

            if (ch != targetCh)
            {
                targetCh = ch;
                targetCount = 1;

                answer.push_back(ch);
            }
            else if (++targetCount < 3)
                answer.push_back(ch);
        }

        return answer;
    }
};