class Solution {
public:
    int commonFactors(int a, int b) {
        int minValue = min(a, b);
        int answer = 0;

        for (int i = 1; i <= minValue; ++i)
            if (a % i == 0 && b % i == 0)
                ++answer;

        return answer;
    }
};