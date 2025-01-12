class Solution {
public:
    string makeFancyString(string s) {
        int sLen = s.length();
        
        string answer;
        answer.reserve(sLen);
        answer.push_back(s[0]);

        int targetCount = 1;
        char targetCh = s[0];

        for (int i = 1; i < sLen; ++i)
        {
            if (s[i] != targetCh)
            {
                targetCh = s[i];
                targetCount = 1;

                answer.push_back(s[i]);
            }
            else if (++targetCount < 3)
                answer.push_back(s[i]);
        }

        return answer;
    }
};