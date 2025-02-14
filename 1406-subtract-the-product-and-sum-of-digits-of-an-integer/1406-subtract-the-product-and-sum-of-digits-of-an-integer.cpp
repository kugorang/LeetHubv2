class Solution {
public:
    int subtractProductAndSum(int n) {
        size_t product = 1;
        unsigned int sum = 0;

        while (n > 0)
        {
            unsigned char targetNum = n % 10;

            product *= targetNum;
            sum += targetNum;

            n /= 10;
        }

        return product - sum;
    }
};