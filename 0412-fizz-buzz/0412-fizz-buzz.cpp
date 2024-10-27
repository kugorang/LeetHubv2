class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;

        answer.reserve(n);

        for (int i = 1; i <= n; ++i)
        {
            if (i % 3 == 0)
                answer.push_back((i % 5 == 0) ? "FizzBuzz" : "Fizz");
            else if (i % 5 == 0)
                answer.push_back("Buzz");
            else
                answer.push_back(to_string(i));
        }

        return answer;
    }
};