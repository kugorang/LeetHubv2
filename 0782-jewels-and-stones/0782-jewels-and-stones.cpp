class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        size_t answer = 0;

        for (size_t jewel : jewels)
            for (auto stone : stones)
                if (jewel == stone)
                    ++answer;

        return answer;
    }
};