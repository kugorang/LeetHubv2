class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int nums1Size = nums1.size();
        int nums2Size = nums2.size();

        int answer1 = 0;
        int answer2 = 0;

        for (int i = 0; i < nums1Size; ++i)
        {
            for (int j = 0; j < nums2Size; ++j)
            {
                if (nums1[i] == nums2[j])
                {
                    ++answer1;
                    break;
                }
            }
        }

        for (int i = 0; i < nums2Size; ++i)
        {
            for (int j = 0; j < nums1Size; ++j)
            {
                if (nums2[i] == nums1[j])
                {
                    ++answer2;
                    break;
                }
            }
        }

        return vector<int> {answer1, answer2};
    }
};