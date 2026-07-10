// Last updated: 7/10/2026, 3:00:00 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> ans;
5
6        sort(nums.begin(), nums.end());
7
8        int n = nums.size();
9
10        for(int i = 0; i < n; i++) {
11
12            if(i > 0 && nums[i] == nums[i - 1])
13                continue;
14
15            int j = i + 1;
16            int k = n - 1;
17
18            while(j < k) {
19
20                int sum = nums[i] + nums[j] + nums[k];
21
22                if(sum == 0) {
23                    ans.push_back({nums[i], nums[j], nums[k]});
24
25                    j++;
26                    k--;
27
28                    while(j < k && nums[j] == nums[j - 1])
29                        j++;
30
31                    while(j < k && nums[k] == nums[k + 1])
32                        k--;
33                }
34                else if(sum < 0) {
35                    j++;
36                }
37                else {
38                    k--;
39                }
40            }
41        }
42
43        return ans;
44    }
45};