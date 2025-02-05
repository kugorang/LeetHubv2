class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int answer = 0;
        size_t hoursSize = hours.size();

        for (size_t i = 0; i < hoursSize; ++i)
            if (hours[i] >= target)
                ++answer;
        
        return answer;
    }
};