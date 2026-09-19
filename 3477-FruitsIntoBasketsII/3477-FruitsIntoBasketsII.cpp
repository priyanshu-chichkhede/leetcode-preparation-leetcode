// Last updated: 9/19/2026, 1:25:39 PM
1class Solution {
2public:
3    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
4        int n = fruits.size();
5        int m = baskets.size();
6        int count = 0;
7
8        for(int i = 0; i < n; i++) {
9            for(int j = 0; j < m; j++) {
10                if(fruits[i] <= baskets[j]) {
11                    baskets[j] = -1;
12                    break;
13                }
14
15                if(j == m - 1) {
16                    count++;
17                }
18            }
19        }
20
21        return count;
22    }
23};