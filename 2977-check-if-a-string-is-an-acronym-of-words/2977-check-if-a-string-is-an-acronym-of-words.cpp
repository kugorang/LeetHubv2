class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        unsigned char sLength = s.length();
        unsigned char wordsSize = words.size();

        if (sLength != wordsSize)
            return false;
        
        for (int i = 0; i < sLength; ++i)
            if (s[i] != words[i][0])
                return false;
        
        return true;
    }
};