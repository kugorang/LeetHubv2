class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occurrences;

        for (int num : arr)
        {
            if (occurrences.find(num) == occurrences.end())
                occurrences.insert(make_pair(num, 1));
            else
                ++occurrences[num];
        }

        vector<pair<int, int>> occurVector(occurrences.begin(), occurrences.end());

        sort(occurVector.begin(), occurVector.end(),
            [](pair<int, int> a, pair<int, int> b)
            {
                return a.second < b.second;
            });

        int occurrencesSize = occurVector.size();
        int prevSecond = occurVector[0].second;

        for (int i = 1; i < occurrencesSize; ++i)
        {
            if (occurVector[i].second == prevSecond)
                return false;
            
            prevSecond = occurVector[i].second;
        }

        return true;
    }
};