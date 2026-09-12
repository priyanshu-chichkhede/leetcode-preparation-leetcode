// Last updated: 9/12/2026, 2:41:22 PM
1class Solution {
2public:
3    int helper(int n, vector<int>& ans) {
4        if (n <= 2) {
5            return n;
6        }
7
8        if (ans[n] != -1) {
9            return ans[n];
10        }
11
12        ans[n] = helper(n-1, ans) + helper(n-2, ans);
13
14        return ans[n];
15    }
16
17    int climbStairs(int n) {
18        vector<int> ans(n+1, -1);
19        return helper(n, ans);
20    }
21};