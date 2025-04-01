class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int originX = x;

        while (x > 0)
        {
            sum += x % 10;
            x /= 10;
        }

        if (originX % sum == 0)
            return sum;

        return -1;
    }
};