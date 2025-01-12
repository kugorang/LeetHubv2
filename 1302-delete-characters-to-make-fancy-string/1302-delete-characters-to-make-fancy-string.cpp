class Solution {
public:
    string makeFancyString(string s) {
        string answer;
        answer.reserve(s.length());

        int targetCount = 0;
        char targetCh;

        for (auto ch : s)
        {
            if (ch == targetCh)
            {
                if (++targetCount >= 3)
                    continue;
                
                answer.push_back(ch);
            }
            else
            {
                targetCh = ch;
                targetCount = 1;

                answer.push_back(ch);
            }
        }

        return answer;
    }
};