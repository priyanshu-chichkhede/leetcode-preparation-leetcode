// Last updated: 9/19/2026, 3:03:50 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int n = nums.size();
5
6        int maxi = nums[0];
7        int mini = nums[0];
8        int ans = nums[0];
9
10        for(int i = 1; i < n; i++) {
11
12            int a = nums[i];
13            int b = maxi * nums[i];
14            int c = mini * nums[i];
15
16            maxi = max(a, max(b, c));
17            mini = min(a, min(b, c));
18
19            ans = max(ans, maxi);
20        }
21
22        return ans;
23    }
24};