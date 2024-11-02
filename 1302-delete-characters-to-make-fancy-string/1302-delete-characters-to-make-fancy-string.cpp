class Solution {
public:
    string makeFancyString(string s) {
        char previousChar = '@';
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
                previousChar = ch;
                isFancyCondition = false;
            }
            else
                isFancyCondition = true;
        }

        return answer;
    }
};