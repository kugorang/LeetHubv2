class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return vector<double> {celsius + 273.15f, celsius * 1.8 + (char)32};
    }
};