class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        unsigned char answer = 0;

        for (auto &sentence : sentences)
        {
            unsigned char spaceCount = 0;

            for (auto &ch : sentence)
                if (ch == ' ')
                    ++spaceCount;
            
            if (spaceCount > answer)
                answer = spaceCount;
        }

        return answer + 1;
    }
};