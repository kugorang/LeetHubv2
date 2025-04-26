class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2);

        for (auto &num : nums1)
            if (find(nums2.begin(), nums2.end(), num) == nums2.end())
                if (find(answer[0].begin(), answer[0].end(), num) == answer[0].end())
                    answer[0].push_back(num);
        
        for (auto &num : nums2)
            if (find(nums1.begin(), nums1.end(), num) == nums1.end())
                answer[1].push_back(num);
        
        sort(answer[1].begin(), answer[1].end());
        answer[1].erase(unique(answer[1].begin(), answer[1].end()), answer[1].end());

        return answer;
    }
};