// Last updated: 7/5/2026, 7:36:50 PM
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4
5        unordered_map<int, int> mp;
6        vector<int> ans;
7
8        for(int i = 0; i < nums1.size(); i++) {
9            mp[nums1[i]]++;
10        }
11
12        for(int i = 0; i < nums2.size(); i++) {
13
14            if(mp.find(nums2[i]) != mp.end()) {
15                ans.push_back(nums2[i]);
16                mp.erase(nums2[i]);
17            }
18        }
19
20        return ans;
21    }
22};