class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> answer;
        answer.reserve(words.size());

        for (int i = 0; i < words.size(); ++i)
        {
            bool findChar = false;

            for (int j = 0; j < words[i].length(); ++j)
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