// Last updated: 7/4/2026, 5:19:27 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        int i = 0;
5
6        while (i + 1 < s.size()) {
7            if (s[i] == s[i + 1]) {
8                s.erase(i, 2);
9
10                if (i > 0) {
11                    i--;
12                }
13            }
14            else {
15                i++;
16            }
17        }
18
19        return s;
20    }
21};