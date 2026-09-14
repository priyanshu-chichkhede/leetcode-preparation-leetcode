// Last updated: 9/14/2026, 10:55:09 PM
1class Solution {
2public:
3    int minCostClimbingStairs(vector<int>& cost) {
4        int n=cost.size();
5        vector<int> dp(n);
6        dp[0]=cost[0];
7        dp[1]=cost[1];
8        for(int i=2;i<n;i++){
9            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
10        }
11        return min(dp[n-1],dp[n-2]);
12    }
13};