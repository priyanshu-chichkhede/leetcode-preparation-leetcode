// Last updated: 7/4/2026, 8:20:34 PM
1class Solution {
2public:
3    string removeOccurrences(string s, string part) {
4        int i = 0;
5        // string: : npos is present as not found part like there are two answer 
6        //FOUND and npos which is given down 
7        while (s.find(part) != string::npos) {
8            i = s.find(part);
9
10            s.erase(i, part.length());
11
12            if (i > 0) {
13                i--;
14            }
15        }
16
17        return s;
18    }
19};