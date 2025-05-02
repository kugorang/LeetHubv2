class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;

        for (unsigned short i = left; i <= right; ++i)
        {
            int currentNum = i;
            bool isSelfDividing = true;

            while (currentNum > 0)
            {
                if (currentNum % 10 == 0 || i % (currentNum % 10) != 0)
                {
                    isSelfDividing = false;
                    break;
                }
            
                currentNum /= 10;
            }

            if (isSelfDividing)
                answer.push_back(i);
        }

        return answer;
    }
};