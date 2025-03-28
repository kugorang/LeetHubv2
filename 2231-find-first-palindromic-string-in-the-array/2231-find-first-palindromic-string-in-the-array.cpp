class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (auto &word : words)
        {
            unsigned char wordLength = word.length();
            unsigned char loopEnd = wordLength >> 1;
            bool isPalindromic = true;

            for (int i = 0; i < loopEnd; ++i)
            {
                if (word[i] != word[wordLength - 1 - i])
                {
                    isPalindromic = false;
                    break;
                }
            }

            if (isPalindromic)
                return word;
        }

        return "";
    }
};