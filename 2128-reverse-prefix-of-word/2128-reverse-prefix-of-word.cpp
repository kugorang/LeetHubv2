class Solution {
public:
    string reversePrefix(string word, char ch) {
        unsigned char wordLength = word.length();

        string answer;
        answer.reserve(wordLength);

        unsigned char i = 255;

        while (++i < wordLength)
        {
            if (word[i] == ch)
            {
                for (short j = i; j >= 0; --j)
                    answer.push_back(word[j]);
                for (short j = i + 1; j < wordLength; ++j)
                    answer.push_back(word[j]);

                break;
            }
        }

        if (i == wordLength)
            return word;
        return answer;
    }
};