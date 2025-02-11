class Solution {
public:
    string reversePrefix(string word, char ch) {
        unsigned char wordLength = word.length();

        string answer;
        answer.reserve(wordLength);

        short index = -1;

        for (unsigned char i = 0; i < wordLength; ++i)
        {
            if (word[i] == ch)
            {
                index = i;
                break;
            }
        }

        if (index == -1)
            return word;
        
        for (short i = index; i >= 0; --i)
            answer.push_back(word[i]);
        for (short i = index + 1; i < wordLength; ++i)
            answer.push_back(word[i]);

        return answer;
    }
};