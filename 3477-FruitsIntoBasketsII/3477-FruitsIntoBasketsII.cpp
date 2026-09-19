// Last updated: 9/19/2026, 1:22:07 PM
1class Solution {
2public:
3    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
4        int n = fruits.size();
5        int m = baskets.size();
6        int count = 0;
7
8        for(int i = 0; i < n; i++) {
9            int j;
10
11            for(j = 0; j < m; j++) {
12                if(fruits[i] <= baskets[j]) {
13                    baskets[j] = -1;
14                    break;
15                }
16            }
17
18            if(j == m) {
19                count++;
20            }
21        }
22
23        return count;
24    }
25};