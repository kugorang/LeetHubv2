class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int answer = 0;

        for (const int &num : nums)
        {
            unsigned char digitCount = 0;
            int currentNum = num;

            while (currentNum > 0)
            {
                ++digitCount;
                currentNum /= 10;
            }

            if (digitCount % 2 == 0)
                ++answer;
        }

        return answer;
    }
};