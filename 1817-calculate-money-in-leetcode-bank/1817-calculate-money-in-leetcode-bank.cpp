class Solution {
public:
    int totalMoney(int n) {
        int day = 1;
        int answer = 0;

        while (day <= n)
        {
            answer += (1 + ((day - 1) / 7) + ((day - 1) % 7));
            ++day;
        }
            
        return answer;
    }
};