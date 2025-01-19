class Solution {
public:
    int differenceOfSums(int n, int m) {
        auto result = 0;

        for (auto i = 1; i <= n; ++i)
            result = (i % m) ? result + i : result - i;

        return result;
    }
};