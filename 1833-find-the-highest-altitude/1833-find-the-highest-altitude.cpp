class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int gainSize = gain.size();

        int beforeAltitude = 0;
        int highestAltitude = 0;

        for (int i = 0; i < gainSize; ++i)
        {
           int currentAltitude = gain[i] + beforeAltitude;
           highestAltitude = max(highestAltitude, currentAltitude);
           
           beforeAltitude = currentAltitude;
        }

        return highestAltitude;
    }
};