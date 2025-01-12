class Solution {
public:
    string makeFancyString(string s) {
        char prevChar;
        bool isFancy;
        string answer;

        answer.reserve(s.length());

        for (auto ch : s)
        {
            if (isFancy && prevChar == ch)
                continue;

            if (prevChar != ch)
            {
                prevChar = ch;
                isFancy = false;
            }
            else
                isFancy = true;

            answer.push_back(ch);
        }

        return answer;
    }
};