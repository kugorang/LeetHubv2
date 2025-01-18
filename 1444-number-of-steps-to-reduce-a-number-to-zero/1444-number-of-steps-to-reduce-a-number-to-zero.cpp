class Solution {
public:
    int numberOfSteps(int num) {
        int answer = 0;

        while (num > 0)
        {
            num = num % 2 ? num - 1 : num / 2;
            ++answer;
        }
        
        return answer;
    }
};