class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        size_t wordsSize = words.size();

        vector<int> answer;
        answer.reserve(wordsSize);

        for (size_t i = 0; i < wordsSize; ++i)
        {
            bool findChar = false;
            size_t wordLength = words[i].length();

            for (size_t j = 0; j < wordLength; ++j)
                if (words[i][j] == x)
                {
                    findChar = true;
                    break;
                }

            if (findChar)
                answer.push_back(i);
        }

        return answer;
    }
};