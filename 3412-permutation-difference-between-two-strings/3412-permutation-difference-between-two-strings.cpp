class Solution {
public:
    int findPermutationDifference(string s, string t) {
        size_t sLen = s.length();
        size_t tLen = t.length();
        int answer = 0;

        for (size_t i = 0; i < sLen; ++i)
        {
            for (size_t j = 0; j < tLen; ++j)
            {
                if (s[i] != t[j])
                    continue;

                answer += ((i >= j) ? (i - j) : (j - i));
                break;
            }
        }

        return answer;
    }
};