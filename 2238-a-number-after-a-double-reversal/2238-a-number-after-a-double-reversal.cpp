class Solution {
public:
    bool isSameAfterReversals(int num) {
        string numStr = to_string(num);
        reverse(numStr.begin(), numStr.end());

        string numStr2 = to_string(stoi(numStr));
        reverse(numStr2.begin(), numStr2.end());

        return num == stoi(numStr2);
    }
};