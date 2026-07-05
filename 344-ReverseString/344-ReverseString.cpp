// Last updated: 7/5/2026, 2:26:26 PM
1class Solution {
2public:
3    bool isValid(string s) {
4        int i = 0;
5
6        while(i + 1 < s.length()) {
7
8            if((s[i] == '(' && s[i+1] == ')') ||
9               (s[i] == '{' && s[i+1] == '}') ||
10               (s[i] == '[' && s[i+1] == ']')) {
11
12                s.erase(i, 2);
13
14                if(i > 0) {
15                    i--;
16                }
17            }
18            else {
19                i++;
20            }
21        }
22
23        return s.empty();
24    }
25};