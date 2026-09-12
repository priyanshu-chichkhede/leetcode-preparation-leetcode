// Last updated: 9/12/2026, 1:29:12 PM
1class Solution {
2public:
3  int climbStairs(int n) {
4    if (n <= 2)
5        return n;
6
7    vector<int> dp(n + 1);
8
9    dp[1] = 1;
10    dp[2] = 2;
11
12    for (int i = 3; i <= n; i++) {
13        dp[i] = dp[i-1] + dp[i-2];
14    }
15
16    return dp[n];
17}
18};