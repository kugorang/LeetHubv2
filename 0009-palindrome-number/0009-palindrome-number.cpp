class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        unsigned char strLength = str.length();

        if (str[0] == '-' || (strLength >= 2 && str[strLength - 1] == '0'))
            return false;

        unsigned char loopEnd = strLength >> 1;

        for (unsigned char i = 0; i <= loopEnd; ++i)
            if (str[i] != str[strLength - 1 - i])
                return false;

        return true;
    }
};