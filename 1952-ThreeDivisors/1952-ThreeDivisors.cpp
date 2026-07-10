// Last updated: 7/11/2026, 12:28:56 AM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int n = nums.size();
5
6        for(int i = 0; i < n-1; i++) {
7            int mini = i;
8
9            for(int j = i+1; j < n; j++) {
10                if(nums[j] < nums[mini]) {
11                    mini = j;
12                }
13            }
14
15            swap(nums[mini], nums[i]);
16        }
17    }
18};