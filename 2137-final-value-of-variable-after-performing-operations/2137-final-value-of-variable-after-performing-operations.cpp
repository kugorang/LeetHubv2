class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;

        for (auto operation : operations)
        {
            auto operationLen = operation.length();

            if (operation[0] == '-' || operation[operationLen - 1] == '-')
                --X;
            else if (operation[0] == '+' || operation[operationLen - 1] == '+')
                ++X;
        }

        return X;
    }
};