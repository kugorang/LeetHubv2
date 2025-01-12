class Solution {
public:
    string defangIPaddr(string address) {
        string answer;
        answer.reserve(address.length() + 6);

        for (char ch : address)
        {
            if (ch == '.')
            {
                answer.push_back('[');
                answer.push_back(ch);
                answer.push_back(']');
            }
            else
                answer.push_back(ch);
        }

        return answer;
    }
};