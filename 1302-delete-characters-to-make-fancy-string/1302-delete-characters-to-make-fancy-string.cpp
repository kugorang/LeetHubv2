class Solution {
public:
    string makeFancyString(string s) {
        int sLen = s.length();
        string answer;
        answer.reserve(sLen);
        
        int targetCount;
        char targetCh;

        for (int i = 0; i < sLen; ++i)
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