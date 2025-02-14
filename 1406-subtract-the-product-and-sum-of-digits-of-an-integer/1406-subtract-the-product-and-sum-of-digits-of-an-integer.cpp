class Solution {
public:
    int subtractProductAndSum(int n) {
        size_t product = 1;
        unsigned short sum = 0;

        while (n > 0)
        {
            product *= n % 10;
            sum += n % 10;

            n /= 10;
        }

        return product - sum;
    }
};