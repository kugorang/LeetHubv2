class Solution {
public:
    string makeFancyString(string s) {
        string answer;
        answer.reserve(s.size());

        bool isFancy;
        char prevChar;

        for (auto ch : s)
        {
            if (prevChar == ch)
            {
                if (isFancy)
                    continue;
                
                isFancy = true;
            }
            else
                isFancy = false;
            
            answer.push_back(ch);
            prevChar = ch;
        }

        return answer;
    }
};