// Last updated: 8/17/2026, 12:03:06 AM
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int n = nums.size();
5        int final= n-1;
6
7        for(int i=n-2;i>=0;i--) {
8            if(i+nums[i]>=final){
9                final=i;
10                
11            }
12        }
13
14        return final==0;
15    }
16};