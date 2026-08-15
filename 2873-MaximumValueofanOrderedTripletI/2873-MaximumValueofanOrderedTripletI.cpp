// Last updated: 8/15/2026, 7:51:36 PM
1class Solution {
2public:
3    long long maximumTripletValue(vector<int>& nums) {
4        int n = nums.size();
5        long long maxi = 0;
6
7        for (int i = 0; i < n - 2; i++) {
8            for (int j = i + 1; j < n - 1; j++) {
9                for (int k = j + 1; k < n; k++) {
10
11                    if (nums[i] - nums[j] > 0) {
12                        long long ans = (long long)(nums[i] - nums[j]) * nums[k];
13                        maxi = max(maxi, ans);
14                    }
15                }
16            }
17        }
18
19        return maxi;
20    }
21};