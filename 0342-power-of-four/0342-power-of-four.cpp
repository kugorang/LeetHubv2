class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1)
            return true;

        if (n <= 0)
            return false;

        while (n > 4)
        {
            if (n % 4 != 0)
                return false;

            n >>= 2;
        }

        if (n % 4 == 0)
            return true;
        return false;
    }
};