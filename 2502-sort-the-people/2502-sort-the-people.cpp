class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        auto namesSize = names.size();
        map<int, string> tempMap;

        for (auto i = 0; i < namesSize; ++i)
            tempMap.insert(make_pair(heights[i], names[i]));

        vector<string> answer;
        answer.reserve(namesSize);
        
        for (auto pair : tempMap)
            answer.push_back(pair.second);

        reverse(answer.begin(), answer.end());
        
        return answer;
    }
};