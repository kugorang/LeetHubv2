class Solution {
public:
    string makeFancyString(string s) {
        char prevChar;
        bool isFancy;
        string answer;

        answer.reserve(s.length());

        for (char ch : s)
        {
            if (prevChar != ch)
            {
                prevChar = ch;
                isFancy = false;
            }
            else
            {
                if (isFancy)
                    continue;

                isFancy = true;
            }

            answer.push_back(ch);
        }

        return answer;
    }
};