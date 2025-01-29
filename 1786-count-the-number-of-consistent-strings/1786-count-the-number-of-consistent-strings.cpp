class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool allowedCh['a' + 26] = { false, };    // 0: 'a', 1: 'b', ..., 25: 'z'

        for (char ch : allowed)
            allowedCh[ch] = true;
    
        int count = 0;

        for (string word : words)
        {
            bool isContained = true;

            for (char ch : word)
            {
                if (allowedCh[ch])
                    continue;

                isContained = false;
                break;
            }

            if (isContained)
                ++count;
        }

        return count;
    }
};