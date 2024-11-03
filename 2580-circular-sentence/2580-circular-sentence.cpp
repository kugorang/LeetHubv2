class Solution {
public:
    bool isCircularSentence(string sentence) {
        const char space = ' ';
        size_t loopEnd = sentence.length() - 1;

        if (!loopEnd)
            return true;

        for (size_t i = 1; i < loopEnd; ++i)
        {
            if (sentence[i] != space)
                continue;
            
            if (sentence[i - 1] != sentence[i + 1])
                return false;
        }

        return sentence[0] == sentence[loopEnd];
    }
};