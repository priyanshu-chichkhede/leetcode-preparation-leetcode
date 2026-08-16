// Last updated: 8/17/2026, 1:33:42 AM
1class Solution {
2public:
3    int jump(vector<int>& nums) {
4        int n = nums.size();
5        int jumps = 0;
6        int currentEnd = 0;
7        int farthest = 0;
8
9        for(int i = 0; i < n - 1; i++) {
10
11            farthest = max(farthest, i + nums[i]);
12
13            if(i == currentEnd) {
14                jumps++;
15                currentEnd = farthest;
16            }
17        }
18
19        return jumps;
20    }
21};