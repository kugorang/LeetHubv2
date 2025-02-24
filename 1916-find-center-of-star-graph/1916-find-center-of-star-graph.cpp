class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> degree;

        for (auto &edge : edges)
        {
            ++degree[edge[0]];
            ++degree[edge[1]];
        }

        int edgesSize = edges.size();

        for (pair<int, int> nodes : degree)
            if (nodes.second == edgesSize)
                return nodes.first;

        return -1;
    }
};