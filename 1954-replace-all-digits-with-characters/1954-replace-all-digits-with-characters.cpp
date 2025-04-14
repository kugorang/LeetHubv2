class Solution {
public:
    string replaceDigits(string s) {
        char prevCh;

        for (auto &ch : s)
        {
            if (isdigit(ch))
                ch = prevCh + (ch - '0');
            else
                prevCh = ch;
        }

        return s;
    }
};