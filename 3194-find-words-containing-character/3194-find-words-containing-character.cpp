class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int wordsSize = words.size();

        vector<int> answer;
        answer.reserve(wordsSize);

        for (int i = 0; i < wordsSize; ++i)
        {
            bool findChar = false;

            for (char ch : words[i])
                if (ch == x)
                    findChar = true;

            if (findChar)
                answer.push_back(i);
        }

        return answer;
    }
};