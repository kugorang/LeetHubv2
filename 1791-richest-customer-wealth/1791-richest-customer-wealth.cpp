class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int customerNum = accounts.size();
        int maxWealth = -1;

        for (int row = 0; row < customerNum; ++row)
        {
            int accountsNum = accounts[row].size();
            int wealthSum = 0;

            for (int col = 0; col < accountsNum; ++col)
                wealthSum += accounts[row][col];

            if (wealthSum > maxWealth)
                maxWealth = wealthSum;
        }

        return maxWealth;
    }
};