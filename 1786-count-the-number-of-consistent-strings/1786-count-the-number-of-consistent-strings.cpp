class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;

        for (auto word : words)
        {
            bool isContained = true;

            for (auto ch : word)
            {
                if (!allowed.contains(ch))
                {
                    isContained = false;
                    break;
                }
            }

            if (isContained)
                ++count;
        }

        return count;
    }
};