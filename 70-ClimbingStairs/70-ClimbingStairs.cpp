// Last updated: 9/13/2026, 12:01:35 AM
1class Solution {
2public:
3    int rob(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> dp(n);
6        if(n==1){
7            return nums[0];
8        }
9        if(n==2){
10           return max(nums[0],nums[1]); 
11        }
12        dp[0]=nums[0];
13        dp[1]=max(nums[0],nums[1]);
14        for(int i=2;i<dp.size();i++){
15            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
16        }
17        return dp[n-1];
18
19    }
20};