class Solution {
public:
    int differenceOfSums(int n, int m) {
        int result = 0;

        for (unsigned short i = 1; i <= n; ++i)
            result = (i % m) ? result + i : result - i;

        return result;
    }
};