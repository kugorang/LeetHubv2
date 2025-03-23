class Solution {
public:
    int GetDigitSum(int digit)
    {
        int sum = 0;

        while (digit > 0)
        {
            sum += digit % 10;
            digit /= 10;
        }

        return sum;
    }

    int differenceOfSum(vector<int>& nums)
    {
        int elementSum = 0;
        int digitSum = 0;

        for (auto &num : nums)
        {
            elementSum += num;
            digitSum += GetDigitSum(num);
        }

        return abs(elementSum - digitSum);
    }
};