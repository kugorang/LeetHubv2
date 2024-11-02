class Solution {
public:
    string makeFancyString(string s) {
        char previousChar;
        bool isFancyCondition;
        string answer;

        answer.reserve(s.size());

        for (auto ch : s)
        {
            if (isFancyCondition && previousChar == ch)
                continue;
    
            answer.push_back(ch);

            if (previousChar != ch)
            {
                isFancyCondition = false;
                previousChar = ch;
            }
            else
                isFancyCondition = true;
        }

        return answer;
    }
};