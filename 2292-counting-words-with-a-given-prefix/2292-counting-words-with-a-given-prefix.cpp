class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        unsigned char prefLength = pref.length();
        int answer = 0;

        for (auto &word : words)
        {
            bool isPrefix = true;

            for (unsigned char i = 0; i < prefLength; ++i)
            {
                if (word[i] != pref[i])
                {
                    isPrefix = false;
                    break;
                }
            }

            if (isPrefix)
                ++answer;
        }

        return answer;
    }
};