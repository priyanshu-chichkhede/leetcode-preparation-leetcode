// Last updated: 9/14/2026, 1:50:28 PM
1class Solution {
2public:
3
4    int solve(vector<int>& nums, int start, int end) {
5        int n=nums.size();
6        vector<int> dp(n-1);
7        dp[0]=nums[start];
8        dp[1]=max(nums[start],nums[start+1]);
9      for(int i = start + 2, j = 2; i<=end; i++, j++) {
10        dp[j] = max(dp[j-1], dp[j-2] + nums[i]);
11            }
12            return dp[n-2];
13    }
14
15    int rob(vector<int>& nums) {
16        int n=nums.size();
17        if(n==1){
18            return nums[0];
19        }
20        if(n==2){
21            return max(nums[0],nums[1]);
22        }
23        return max(solve(nums,0,n-2),solve(nums,1,n-1));
24    }
25};