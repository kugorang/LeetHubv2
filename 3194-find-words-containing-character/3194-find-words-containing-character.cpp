class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        auto wordsSize = words.size();

        vector<int> answer;
        answer.reserve(wordsSize);

        for (auto i = 0; i < wordsSize; ++i)
        {
            auto findChar = false;
            auto wordLength = words[i].length();

            for (auto j = 0; j < wordLength; ++j)
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