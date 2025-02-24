class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int edgesSize = edges.size();

        unordered_map<int, int> degree;
        degree.reserve(edgesSize);

        for (auto &edge : edges)
        {
            ++degree[edge[0]];
            ++degree[edge[1]];
        }

        for (pair<int, int> nodes : degree)
            if (nodes.second == edgesSize)
                return nodes.first;

        return -1;
    }
};