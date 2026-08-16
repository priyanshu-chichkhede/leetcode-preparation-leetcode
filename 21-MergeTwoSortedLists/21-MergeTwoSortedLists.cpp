// Last updated: 8/17/2026, 1:48:43 AM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans = 0;
5
6        for(int i = 0; i < nums.size(); i++) {
7            ans = ans^nums[i];
8        }
9
10        return ans;
11    }
12};