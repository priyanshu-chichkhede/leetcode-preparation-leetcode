// Last updated: 8/16/2026, 11:23:29 PM
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int n = nums.size();
5        int maxJump = 0;
6
7        for(int i = 0; i < n-1; i++) {
8            if(i > maxJump) {
9                return false;
10            }
11
12            maxJump = max(maxJump, i + nums[i]);
13        }
14
15        return maxJump >= n-1;
16    }
17};