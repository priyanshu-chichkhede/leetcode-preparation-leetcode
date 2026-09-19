// Last updated: 9/19/2026, 2:26:53 PM
1class Solution {
2public:
3    bool findSubarrays(vector<int>& nums) {
4        int n = nums.size();
5        int k = 0;
6        int count = 0;
7
8        while(k < n - 1) {
9            int sum = nums[k] + nums[k + 1];
10
11            int i = k + 1;
12            int j = k + 2;
13
14            while(j < n) {
15                if(sum == nums[i] + nums[j]) {
16                    return true;
17                }
18
19                i++;
20                j++;
21            }
22
23            k++;
24        }
25
26        return false;
27    }
28};