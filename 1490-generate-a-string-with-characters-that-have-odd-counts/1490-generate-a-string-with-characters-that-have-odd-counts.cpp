class Solution {
public:
    string generateTheString(int n) {
        string answer = "";

        if (n % 2 == 0)
        {
            answer.push_back('b');
            --n;
        }

        for (unsigned short i = 0; i < n; ++i)
            answer.push_back('a');

        return answer;
    }
};