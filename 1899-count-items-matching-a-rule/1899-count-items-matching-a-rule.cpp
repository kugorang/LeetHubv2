class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int answer = 0;
        unsigned short index;
        
        if (ruleKey == "type")
            index = 0;
        else if (ruleKey == "color")
            index = 1;
        else
            index = 2;

        for (auto &item : items)
            if (item[index] == ruleValue)
                ++answer;

        return answer;
    }
};