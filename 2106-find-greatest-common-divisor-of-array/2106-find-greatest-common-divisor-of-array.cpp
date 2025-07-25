class Solution {
public:
    int GCD(int a, int b)
    {
        while (b > 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;

        for (int num : nums)
        {
            if (num < smallest)
                smallest = num;
            if (num > largest)
                largest = num;
        }

        return GCD(smallest, largest);
    }
};