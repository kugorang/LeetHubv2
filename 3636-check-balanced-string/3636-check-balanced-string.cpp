class Solution {
public:
    bool isBalanced(string num) {
        unsigned short numLength = num.length();
        unsigned short evenSum = 0;
        unsigned short oddSum = 0;

        for (unsigned short i = 0; i < numLength; ++i)
        {
            if (i % 2 == 0)
                evenSum += (num[i] - '0');
            else
                oddSum += (num[i] - '0');
        }

        return evenSum == oddSum;
    }
};