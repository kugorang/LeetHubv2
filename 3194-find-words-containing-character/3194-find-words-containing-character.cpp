class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int wordsSize = words.size();

        vector<int> answer;
        answer.reserve(wordsSize);

        for (int i = 0; i < wordsSize; ++i)
        {
            bool findChar = false;
            string currentStr = words[i];
            int wordSize = currentStr.size();

            for (int j = 0; j < wordSize; ++j)
                if (currentStr[j] == x)
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