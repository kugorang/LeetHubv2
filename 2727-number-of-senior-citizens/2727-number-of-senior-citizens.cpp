class Solution {
public:
    int countSeniors(vector<string>& details) {
        int answer = 0;

        for (auto &detail : details)
            if ((detail[11] - '0') * 10 + (detail[12] - '0') > 60)
                ++answer;

        return answer;
    }
};