class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int edgesSize = edges.size();
        vector<int> nodesCount(edgesSize + 2, 0);

        int answerIndex = 0;
        int answerValue = 0;

        for (auto &edge : edges)
        {
            if (++nodesCount[edge[0]] > answerValue)
            {
                answerIndex = edge[0];
                answerValue = nodesCount[edge[0]];
            }

            if (++nodesCount[edge[1]] > answerValue)
            {
                answerIndex = edge[1];
                answerValue = nodesCount[edge[1]];
            }
        }

        return answerIndex;
    }
};