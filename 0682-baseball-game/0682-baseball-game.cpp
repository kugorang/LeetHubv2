class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> temp;

        for (string str : operations)
        {
            if (str == "D")
                temp.push_back(temp.back() << 1);
            else if (str == "C")
                temp.pop_back();
            else if (str == "+")
                temp.push_back(temp[temp.size() - 2] + temp.back());
            else
                temp.push_back(stoi(str));
        }

        int answer = 0;

        for (int num : temp)
            answer += num;

        return answer;
    }
};