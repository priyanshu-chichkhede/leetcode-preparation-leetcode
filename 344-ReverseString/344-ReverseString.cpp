// Last updated: 7/5/2026, 2:30:22 PM
1class Solution {
2public:
3    bool isValid(string s) {
4        int i = 0;
5
6        while(i + 1 < s.length()) {
7            // we do it because the length can be 0 as well so 0-1 would be -1 to prevent that we do this part 
8            if((s[i] == '(' && s[i+1] == ')') ||
9               (s[i] == '{' && s[i+1] == '}') ||
10               (s[i] == '[' && s[i+1] == ']')) {
11
12                s.erase(i, 2);
13                // we do this to tackle the issue of {{()}} where the adjacent paranthesis are completely different 
14
15                if(i > 0) {
16                    i--;
17                }
18            }
19            else {
20                i++;
21            }
22        }
23
24        return s.empty(); // used as if s is empty it returns true or if s is not empty it returns false
25    }
26};