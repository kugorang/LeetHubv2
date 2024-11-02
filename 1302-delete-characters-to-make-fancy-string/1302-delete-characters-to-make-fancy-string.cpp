class Solution {
public:
    string makeFancyString(string s) {
        char previousChar;
        bool isFancyCondition;
        string answer;

        int sSize = s.size();
        answer.reserve(sSize);

        for (int i = 0; i < sSize; ++i)
        {
            char ch = s[i];

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