class Solution {
public:
    int differenceOfSums(int n, int m) {
        unsigned int num1 = 0, num2 = 0;

        for (unsigned short i = 1; i <= n; ++i)
        {
            if (i % m)
                num1 += i;
            else
                num2 += i;
        }

        return num1 - num2;
    }
};