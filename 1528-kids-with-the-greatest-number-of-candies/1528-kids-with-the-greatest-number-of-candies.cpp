class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> answer;
        answer.reserve(candies.size());

        int maxCandies = 0;

        for (auto candy : candies)
            if (candy > maxCandies)
                maxCandies = candy;
            
        for (auto candy : candies)
            answer.push_back(candy + extraCandies >= maxCandies);

        return answer;
    }
};