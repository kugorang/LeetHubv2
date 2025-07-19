class Solution {
public:
    string removeTrailingZeros(string num) {
        int numLength = num.length();
        int lastZeroIndex = -1;

        for (int i = 0; i < numLength; ++i)
            if (num[i] == '0' && (i != 0 && num[i - 1] != '0'))
                lastZeroIndex = i;
        
        if (num[numLength - 1] != '0')
            lastZeroIndex = -1;

        if (lastZeroIndex != -1)
            for (int i = lastZeroIndex; i < numLength; ++i)
                num.pop_back();
        
        return num;
    }
};