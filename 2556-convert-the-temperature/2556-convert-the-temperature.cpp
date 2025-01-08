class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> answer;
        answer.reserve(2);

        answer.push_back(celsius + 273.15);
        answer.push_back(celsius * 1.8 + 32.0);

        return answer;
    }
};