class Solution {
public:
    int subtractProductAndSum(int n) {
        size_t product = 1;
        unsigned short sum = 0;

        while (n > 0)
        {
            unsigned char tmpN = n % 10;

            product *= tmpN;
            sum += tmpN;

            n /= 10;
        }

        return product - sum;
    }
};