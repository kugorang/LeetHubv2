class Solution {
public:
    bool squareIsWhite(string coordinates) {
        // even
        if ((coordinates[0] - 'a') % 2 == 0)
            return (coordinates[1] - '0') % 2 == 0;

        // odd
        return (coordinates[1] - '0') % 2 == 1;
    }
};