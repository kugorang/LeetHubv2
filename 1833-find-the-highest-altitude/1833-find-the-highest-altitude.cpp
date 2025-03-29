class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int beforeAltitude = 0;
        int highestAltitude = 0;

        unsigned char gainSize = gain.size();

        for (unsigned char i = 0; i < gainSize; ++i)
        {
           int currentAltitude = gain[i] + beforeAltitude;
           highestAltitude = max(highestAltitude, currentAltitude);
           
           beforeAltitude = currentAltitude;
        }

        return highestAltitude;
    }
};