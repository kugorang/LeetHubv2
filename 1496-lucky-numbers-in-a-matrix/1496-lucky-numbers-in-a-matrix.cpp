class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> answer;
        int rowCount = matrix.size();
        int colCount = matrix[0].size();

        for (int row = 0; row < rowCount; ++row)
        {
            int minNumInRow = 100001;
            int minNumColIndex = -1;

            for (int col = 0; col < colCount; ++col)
            {
                if (matrix[row][col] < minNumInRow)
                {
                    minNumInRow = matrix[row][col];
                    minNumColIndex = col;
                }
            }

            bool isLuckyNumber = true;
            
            for (int row2 = 0; row2 < rowCount; ++row2)
            {
                if (matrix[row2][minNumColIndex] > minNumInRow)
                {
                    isLuckyNumber = false;
                    break;
                }
            }

            if (isLuckyNumber)
                answer.push_back(minNumInRow);
        }

        return answer;
    }
};