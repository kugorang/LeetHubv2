class Solution {
public:
    string makeFancyString(string s) {
        string answer;
        answer.reserve(s.length());

        bool isFancy = false;
        char prevChar = '\0';

        for (auto ch : s)
        {
            if (prevChar == ch)
            {
                if (isFancy)
                    continue;
                
                isFancy = true;
            }
            else
            {
                isFancy = false;
                prevChar = ch;
            }

            answer.push_back(ch);
        }

        return answer;
    }
};