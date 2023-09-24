class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       // we insert all each of nums2 elements into nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i]; // we insert nums2[i] into nums1[m + i]
        }
        // we sort nums1
        sort(nums1.begin(), nums1.end());

    }
};