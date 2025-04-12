class Solution {
public:
    void reverseString(vector<char>& s) {
        unsigned short sSize = s.size();
        unsigned short loopEnd = s.size() >> 1;

        for (unsigned short i = 0; i < loopEnd; ++i)
        {
            unsigned char temp = s[i];
            s[i] = s[sSize - 1 - i];
            s[sSize - 1 - i] = temp;
        }
    }
};