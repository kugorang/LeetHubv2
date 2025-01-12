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

            answer.push_back(ch);

            if (prevChar != ch)
            {
                prevChar = ch;
                isFancy = false;
            }
            else
                isFancy = true;
        }

        return answer;
    }
};