class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        auto firstEdge = edges[0];
        auto secondEdge = edges[1];

        if (firstEdge[0] == secondEdge[0]
        || firstEdge[0] == secondEdge[1])
            return firstEdge[0];
        
        return firstEdge[1];
    }
};