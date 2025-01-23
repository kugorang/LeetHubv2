class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        auto wordsSize = words.size();

        vector<int> answer;
        answer.reserve(wordsSize);

        for (auto i = 0; i < wordsSize; ++i)
        {
            bool findChar = false;

            for (char ch : words[i])
                if (ch == x)
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