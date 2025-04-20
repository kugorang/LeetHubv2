class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<unsigned char, unsigned char> um;

        for (auto &num : nums)
        {
            if (um.find(num) == um.end())
                um.insert(make_pair(num, 1));
            else
                ++um[num];
        }

        unsigned short answer = 0;

        for (auto &element : um)
            if (element.second == 1)
                answer += element.first;

        return answer;
    }
};