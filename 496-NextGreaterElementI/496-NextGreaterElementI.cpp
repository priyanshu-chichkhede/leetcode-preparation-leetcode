// Last updated: 8/5/2026, 4:16:13 PM
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4
5        stack<int> st;
6        unordered_map<int, int> mp;
7
8        // Build next greater element for every element in nums2
9        for (int i = nums2.size() - 1; i >= 0; i--) {
10
11            while (!st.empty() && st.top() <= nums2[i]) {
12                st.pop();
13            }
14
15            if (st.empty()) {
16                mp[nums2[i]] = -1;
17            } else {
18                mp[nums2[i]] = st.top();
19            }
20
21            st.push(nums2[i]);
22        }
23
24        // Answer queries for nums1
25        vector<int> ans;
26
27        for (int num : nums1) {
28            ans.push_back(mp[num]);
29        }
30
31        return ans;
32    }
33};