class Solution {
public:
    string makeFancyString(string s) {
        char prevChar;
        bool isFancy;
        string answer;

        answer.reserve(s.length());

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
                prevChar = ch;
                isFancy = false;
            }

            answer.push_back(ch);
        }

        return answer;
    }
};