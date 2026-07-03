// Last updated: 7/3/2026, 10:22:19 PM
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int ans = 0;

        for(int k = 0; k < n; k++) {
            int roundMax = 0;

            for(int i = 0; i < m; i++) {
                int idx = 0;

                for(int j = 1; j < n; j++) {
                    if(grid[i][j] > grid[i][idx]) {
                        idx = j;
                    }
                }

                roundMax = max(roundMax, grid[i][idx]);
                grid[i][idx] = -1;  // mark as deleted
            }

            ans += roundMax;
        }

        return ans;
    }
};