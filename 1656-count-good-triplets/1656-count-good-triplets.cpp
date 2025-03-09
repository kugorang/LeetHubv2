class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) 
    {
        int answer = 0;
        int arrSize = arr.size();

        for (int i = 0; i < arrSize - 2; ++i)
        {
            for (int j = i + 1; j < arrSize - 1; ++j)
            {
                if (abs(arr[i] - arr[j]) > a)
                    continue;

                for (int k = j + 1; k < arrSize; ++k)
                    if (abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                        ++answer;
            }
        }

        return answer;
    }
};