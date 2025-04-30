class Solution {
public:
    int countKeyChanges(string s) {
        char prevCh = NULL;
        int answer = -1;

        for (auto &currCh : s)
        {
            currCh = tolower(currCh);

            if (prevCh != currCh)
            {
                ++answer;
                prevCh = currCh;
            }
        }

        return answer;
    }
};