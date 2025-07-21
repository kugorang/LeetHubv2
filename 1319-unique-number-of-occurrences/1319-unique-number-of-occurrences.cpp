class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        unsigned short arrSize = arr.size();

        short prevNum = arr[0];
        unsigned short numCount = 1;
        vector<bool> checkNumCount(1001);

        for (unsigned short i = 1; i < arrSize; ++i)
        {
            if (arr[i] == prevNum)
            {
                ++numCount;
                continue;
            }

            if (checkNumCount[numCount])
                    return false;
                
            checkNumCount[numCount] = true;
            prevNum = arr[i];
            numCount = 1;
        }

        if (checkNumCount[numCount])
            return false;

        return true;
    }
};