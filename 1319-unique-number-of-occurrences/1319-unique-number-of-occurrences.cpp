class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int arrSize = arr.size();

        int prevNum = arr[0];
        int numCount = 1;
        vector<bool> checkNumCount(1001);

        for (int i = 1; i < arrSize; ++i)
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