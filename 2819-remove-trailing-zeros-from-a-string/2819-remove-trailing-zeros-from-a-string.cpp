class Solution {
public:
    string removeTrailingZeros(string num) {
        unsigned short numLength = num.length();
        unsigned short lastZeroIndex = -1;

        for (unsigned short i = 0; i < numLength; ++i)
            if (num[i] == '0' && (i != 0 && num[i - 1] != '0'))
                lastZeroIndex = i;
        
        if (num[numLength - 1] != '0')
            lastZeroIndex = -1;

        if (lastZeroIndex != -1)
            for (unsigned short i = lastZeroIndex; i < numLength; ++i)
                num.pop_back();
        
        return num;
    }
};