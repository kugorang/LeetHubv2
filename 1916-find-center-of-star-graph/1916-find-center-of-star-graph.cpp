class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int edgesSize = edges.size();
        vector<int> nodesCount(edgesSize + 2, 0);

        for (auto &edge : edges)
        {
            nodesCount[edge[0]] += 1;
            nodesCount[edge[1]] += 1;
        }

        int answerIndex = 1;
        int answerValue = nodesCount[1];

        for (int i = 2; i < edgesSize + 2; ++i)
        {
            if (nodesCount[i] > answerValue)
            {
                answerIndex = i;
                answerValue = nodesCount[i];
            }
        }

        return answerIndex;
    }
};