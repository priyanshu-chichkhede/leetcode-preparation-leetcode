// Last updated: 9/13/2026, 1:25:27 AM
1class Solution {
2public:
3
4    int solve(vector<int>& nums, int start, int end) {
5        int size = end - start + 1;
6
7        vector<int> dp(size);
8
9        dp[0] = nums[start];
10
11        if (size == 1)
12            return dp[0];
13
14        dp[1] = max(nums[start], nums[start + 1]);
15
16        for (int i = 2; i < size; i++) {
17            dp[i] = max(dp[i - 1],
18                        dp[i - 2] + nums[start + i]);
19        }
20
21        return dp[size - 1];
22    }
23
24    int rob(vector<int>& nums) {
25        int n = nums.size();
26
27        if (n == 1)
28            return nums[0];
29
30        int case1 = solve(nums, 1, n - 1);
31        int case2 = solve(nums, 0, n - 2);
32
33        return max(case1, case2);
34    }
35};