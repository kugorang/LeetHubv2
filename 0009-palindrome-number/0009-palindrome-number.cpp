class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);

        int strLength = str.length();
        int loopEnd = strLength >> 1;

        for (int i = 0; i <= loopEnd; ++i)
            if (str[i] != str[strLength - 1 - i])
                return false;

        return true;
    }
};