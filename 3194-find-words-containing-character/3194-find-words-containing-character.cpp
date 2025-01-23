class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        size_t wordsSize = (size_t)words.size();

        vector<int> answer;
        answer.reserve(wordsSize);

        for (size_t i = 0; i < wordsSize; ++i)
        {
            bool findChar = false;
            size_t wordSize = (size_t)words[i].size();

            for (size_t j = 0; j < wordSize; ++j)
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