class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n != 0) {
            vector<int> nums3;
            int i = 0, j = 0;

            while (i<m && j<n) {
                if (nums1[i] < nums2[j]) {
                    nums3.push_back(nums1[i++]);
                }
                else {
                    nums3.push_back(nums2[j++]);
                }
            }
            if (i == m) {
                for (int k=j; k<n; ++k) {
                    nums3.push_back(nums2[k]);
                }
            }
            if (j == n) {
                for (int k=i; k<m; ++k) {
                    nums3.push_back(nums1[k]);
                }
            }
            for (int i=0; i<m+n; ++i) {
                nums1[i] = nums3[i];
            }
        }
    }
};
