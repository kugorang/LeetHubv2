class Solution {
public:
    string toLowerCase(string s) {
        for (auto &ch : s)
            if (ch >= 'A' && ch <= 'Z')
                ch += ('a' - 'A');
                
        return s;
    }
};