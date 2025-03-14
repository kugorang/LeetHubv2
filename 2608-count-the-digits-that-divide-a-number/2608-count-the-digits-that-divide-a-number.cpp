class Solution {
public:
    int countDigits(int num) {
        int answer = 0;
        int value = num;

        while (value > 0)
        {
            if (num % (value % 10) == 0)
                ++answer;
            value /= 10;
        }

        return answer;
    }
};