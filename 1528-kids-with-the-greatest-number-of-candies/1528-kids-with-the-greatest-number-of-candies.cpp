class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        size_t candiesSize = candies.size();
        vector<bool> answer;
        answer.reserve(candiesSize);

        size_t maxCandies = 0;

        for (size_t i = 0; i < candiesSize; ++i)
            if (candies[i] > maxCandies)
                maxCandies = candies[i];
            
        for (size_t i = 0; i < candiesSize; ++i)
            answer.push_back(candies[i] + extraCandies >= maxCandies);

        return answer;
    }
};