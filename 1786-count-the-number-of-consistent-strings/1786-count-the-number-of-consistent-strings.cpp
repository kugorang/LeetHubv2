class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool allowedCh[26] = { false, };    // 0: 'a', 1: 'b', ..., 25: 'z'

        for (auto ch : allowed)
            allowedCh[ch - 'a'] = true;
    
        int count = 0;

        for (auto word : words)
        {
            bool isContained = true;

            for (auto ch : word)
            {
                if (allowedCh[ch - 'a'])
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