class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;

        while (num > 0)
        {
            num = num % 2 ? num - 1 : num * 0.5f;
            ++count;
        }

        return count;
    }
};