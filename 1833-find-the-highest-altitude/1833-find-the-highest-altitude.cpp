class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int gainSize = gain.size();
        vector<int> altitude;
        altitude.reserve(gainSize + 1);

        altitude.push_back(0);

        int highestAltitude = 0;

        for (int i = 0; i < gainSize; ++i)
        {
           int currentAltitude = gain[i] + altitude[i];
           highestAltitude = max(highestAltitude, currentAltitude);
           
           altitude.push_back(currentAltitude);
        }

        return highestAltitude;
    }
};