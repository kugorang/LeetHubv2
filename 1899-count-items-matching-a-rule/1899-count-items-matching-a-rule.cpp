class Solution {
private:
    unordered_map<string, int> um;
public:
    Solution() {
        um = {
            {"type", 0},
            {"color", 1},
            {"name", 2}
        };
    }

    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int answer = 0;

        for (auto &item : items)
            if (item[um[ruleKey]] == ruleValue)
                ++answer;

        return answer;
    }
};