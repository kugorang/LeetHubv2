class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        for (auto &ch : s)
        {
            if (ch == '(' || ch == '{' || ch == '[')
                brackets.push(ch);
            else if (ch == ')')
            {
                if (brackets.size() == 0)
                    return false;

                if (brackets.top() != '(')
                    break;
                
                brackets.pop();
            }
            else if (ch == '}')
            {
                if (brackets.size() == 0)
                    return false;

                if (brackets.top() != '{')
                    break;
                
                brackets.pop();
            }               
            else if (ch == ']')
            {
                if (brackets.size() == 0)
                    return false;
                    
                if (brackets.top() != '[')
                    break;
                
                brackets.pop();
            }
        }

        return brackets.size() == 0;
    }
};