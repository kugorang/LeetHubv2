class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int wordsSize = words.size();

        vector<int> answer;
        answer.reserve(wordsSize);

        for (int i = 0; i < wordsSize; ++i)
        {
            bool findChar = false;
            string str = words[i];
            int strLen = str.length();

            for (int j = 0; j < strLen; ++j)
                if (str[j] == x)
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