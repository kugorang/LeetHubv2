class Solution {
public:
    int numberOfMatches(int n) {
        int answer = 0;

        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n = n >> 1;
                answer += n;
            }
            else
            {
                n = ((n - 1) >> 1) + 1;
                answer += n - 1;
            }
        }

        return answer;
    }
};