class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        unsigned char squareSize = mat.size();
        unsigned char squareEnd = squareSize - 1;

        for (unsigned char i = 0; i < squareSize; ++i)
            sum += mat[i][i] + mat[i][squareEnd - i];
            
        if (squareSize % 2 == 1)
        {
            unsigned char halfOfSquare = squareSize >> 1;
            sum -= mat[halfOfSquare][halfOfSquare];
        }

        return sum;
    }
};