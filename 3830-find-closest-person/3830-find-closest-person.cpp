class Solution {
public:
    int findClosest(int x, int y, int z) {
        unsigned char xGap = abs(z - x);
        unsigned char yGap = abs(z - y);

        if (xGap < yGap)
            return 1;
        else if (xGap > yGap)
            return 2;
        return 0;
    }
};