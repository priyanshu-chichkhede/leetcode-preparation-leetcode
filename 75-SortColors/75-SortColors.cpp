// Last updated: 7/11/2026, 6:33:14 PM
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4
5        vector<int> ans;
6
7        int i = 0;
8        int j = 0;
9
10        while (i < m && j < n) {
11            if (nums1[i] <= nums2[j]) {
12                ans.push_back(nums1[i]);
13                i++;
14            } else {
15                ans.push_back(nums2[j]);
16                j++;
17            }
18        }
19
20        while (i < m) {
21            ans.push_back(nums1[i]);
22            i++;
23        }
24
25        while (j < n) {
26            ans.push_back(nums2[j]);
27            j++;
28        }
29
30        // Copy the merged array back into nums1
31        for (int k = 0; k < m + n; k++) {
32            nums1[k] = ans[k];
33        }
34    }
35};