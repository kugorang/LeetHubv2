class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> um;
        
        for (char &ch : s)
        {
            if (um.find(ch) == um.end())
                um.insert(make_pair(ch, 1));
            else
                ++um[ch];
        }

        int prevNum = -1;

        for (auto &element : um)
        {
            if (prevNum == -1)
            {
                prevNum = element.second;
                continue;
            }
                
            if (element.second != prevNum)
                return false;
        }

        return true;
    }
};