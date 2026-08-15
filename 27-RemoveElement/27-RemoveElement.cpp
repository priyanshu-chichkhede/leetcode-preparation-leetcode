// Last updated: 8/16/2026, 1:54:37 AM
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4
5        if (needle.size() > haystack.size()) {
6            return -1;
7        }
8
9        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
10
11            int k = i;
12
13            for (int j = 0; j < needle.size(); j++) {
14
15                if (haystack[k] != needle[j]) {
16                    break;
17                }
18
19                if (j == needle.size() - 1) {
20                    return i;
21                }
22
23                k++;
24            }
25        }
26
27        return -1;
28    }
29};