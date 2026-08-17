// Last updated: 8/17/2026, 2:00:12 PM
1class Solution {
2public:
3    int candy(vector<int>& ratings) {
4        int n = ratings.size();
5
6        vector<int> left(n);
7        vector<int> right(n);
8
9        left[0] = 1;
10        right[n - 1] = 1;
11
12        // Check from left to right
13        for(int i = 1; i < n; i++) {
14            if(ratings[i] > ratings[i - 1]) {
15                left[i] = left[i - 1] + 1;
16            }
17            else {
18                left[i] = 1;
19            }
20        }
21
22        // Check from right to left
23        for(int i = n - 2; i >= 0; i--) {
24            if(ratings[i] > ratings[i + 1]) {
25                right[i] = right[i + 1] + 1;
26            }
27            else {
28                right[i] = 1;
29            }
30        }
31
32        int sum = 0;
33
34        for(int i = 0; i < n; i++) {
35            sum += max(left[i], right[i]);
36        }
37
38        return sum;
39    }
40};