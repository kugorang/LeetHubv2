class Solution {
public:
    string itoa(int n, int base)
    {
        string str;
        string baseStr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        while (n > 0)
        {
            str.push_back(baseStr[n % base]);
            n /= base;
        }

        reverse(str.begin(), str.end());

        return str;
    }

    string concatHex36(int n)
    {
        return itoa(n * n, 16) + itoa(n * n * n, 36);
    }
};