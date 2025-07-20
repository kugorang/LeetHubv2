class Solution {
public:
    int minimumChairs(string s) {
        int count = 0;
        int maxCount = 0;

        for (const char &ch : s)
        {
            if (ch == 'E')
                ++count;
            else if (ch == 'L')
                --count;
            
            if (count > maxCount)
                maxCount = count;
        }

        return maxCount;
    }
};