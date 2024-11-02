class Solution {
public:
    string makeFancyString(string s) {
        char previousChar;
        bool isFancyCondition;
        string answer;

        answer.reserve(s.size());

        for (auto ch : s)
        {
            if (previousChar == ch && isFancyCondition)
                continue;
    
            answer.push_back(ch);

            if (previousChar == ch)
            {
                isFancyCondition = true;
                continue;
            }

            previousChar = ch;
            isFancyCondition = false;
        }

        return answer;
    }
};