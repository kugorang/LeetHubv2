class Solution {
public:
    int numberOfSteps(int num) {
        int answer = 0;

        while (num > 0)
        {
            num = num % 2 ? num - 1 : num * 0.5f;
            ++answer;
        }
        
        return answer;
    }
};