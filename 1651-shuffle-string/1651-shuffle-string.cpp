class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        unsigned short indicesSize = indices.size();
        string answer(indicesSize, '\0');

        for (unsigned short i = 0; i < indicesSize; ++i)
            answer[indices[i]] = s[i];

        return answer;
    }
};