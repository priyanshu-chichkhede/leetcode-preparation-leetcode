// Last updated: 8/19/2026, 4:26:46 PM
1class Solution {
2public:
3    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
4        
5        int n = grid.size();
6
7        vector<vector<int>> ans(
8            n - 2,
9            vector<int>(n - 2)
10        );
11
12        for (int i = 0; i < n - 2; i++) {
13            for (int j = 0; j < n - 2; j++) {
14
15                int maxi = 0;
16
17                for (int a = i; a < i + 3; a++) {
18                    for (int b = j; b < j + 3; b++) {
19                        maxi = max(maxi, grid[a][b]);
20                    }
21                }
22
23                ans[i][j] = maxi;
24            }
25        }
26
27        return ans;
28    }
29};