class Solution {
public:
    string interpret(string command) {
        int commandLen = command.length();
        string answer;
        answer.reserve(commandLen);

        for (int i = 0; i < commandLen; ++i)
        {
            char ch = command[i];

            if (ch == 'G')
            {
                answer.push_back(ch);
                continue;
            }
            
            if (ch == '(')
            {
                if (i + 1 < commandLen && command[i + 1] == ')')
                    answer.push_back('o');
                else
                {
                    answer.push_back('a');
                    answer.push_back('l');
                }
            }
        }

        return answer;
    }
};