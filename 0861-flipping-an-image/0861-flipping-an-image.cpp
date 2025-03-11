class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int loopEnd = n >> 1;

        for (auto &row : image)
        {
            for (int i = 0; i < loopEnd; ++i)
            {
                int tmp = row[i];
                row[i] = row[n - 1 - i];
                row[n - 1 - i] = tmp;

                row[i] = (row[i] == 0 ? 1 : 0);
                row[n - 1 - i] = (row[n - 1 - i] == 0 ? 1 : 0);
            }

            if (n % 2 == 1 || loopEnd == 0)
                row[loopEnd] = (row[loopEnd] == 0 ? 1 : 0);
        }

        return image;
    }
};