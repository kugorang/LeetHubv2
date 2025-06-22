class Solution {
public:
    bool IsVowel(char ch)
    {
        ch = tolower(ch);

        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    bool halvesAreAlike(string s)
    {
        int sLength = s.length();
        int loopEnd = sLength >> 1;

        int aCount = 0;

        for (int i = 0; i < loopEnd; ++i)
            if (IsVowel(s[i]))
                ++aCount;

        int bCount = 0;

        for (int i = loopEnd; i < sLength; ++i)
            if (IsVowel(s[i]))
                ++bCount;

        return aCount == bCount;
    }
};