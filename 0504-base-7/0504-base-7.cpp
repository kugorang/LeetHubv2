class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0)
            return "0";

        string answer;

        if (num < 0)
        {
            answer.push_back('-');
            num = -num;
        }

        string numStr;
        
        while (num > 0)
        {
            numStr.push_back(num % 7 + '0');
            num /= 7;
        }

        reverse(numStr.begin(), numStr.end());

        answer += numStr;

        return answer;
    }
};