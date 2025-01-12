class Solution {
public:
    string makeFancyString(string s) {
        string answer;
        answer.reserve(s.length());

        int targetCount;
        char targetCh;

        for (auto ch : s)
        {
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