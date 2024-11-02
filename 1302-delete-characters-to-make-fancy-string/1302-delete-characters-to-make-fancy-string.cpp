class Solution {
public:
    string makeFancyString(string s) {
        string answer;
        bool isFancyCondition;
        char previousChar;

        answer.reserve(s.size());

        for (auto ch : s)
        {
            if (isFancyCondition && previousChar == ch)
                continue;
    
            answer.push_back(ch);

            if (previousChar != ch)
            {
                previousChar = ch;
                isFancyCondition = false;
            }
            else
                isFancyCondition = true;
        }

        return answer;
    }
};