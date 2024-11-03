class Solution {
public:
    bool isCircularSentence(string sentence) {
        size_t loopEnd = sentence.length() - 1;
        bool isOneWord = true;

        if (loopEnd == 0)
            return true;

        for (size_t i = 1; i < loopEnd; ++i)
        {
            if (sentence[i] != ' ')
                continue;
            
            if (sentence[i - 1] != sentence[i + 1])
                return false;
        }

        if (sentence[0] != sentence[loopEnd])
            return false;

        return true;
    }
};