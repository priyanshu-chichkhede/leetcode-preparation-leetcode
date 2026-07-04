// Last updated: 7/4/2026, 2:40:10 PM
1class Solution {
2public:
3    string reverseVowels(string s) {
4        int n = s.length();
5        int i = 0;
6        int j = n - 1;
7
8        while (i < j) {
9            if (!(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ||
10                  s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')) {
11                i++;
12            }
13            else if (!(s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U' ||
14                       s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')) {
15                j--;
16            }
17            else {
18                swap(s[i], s[j]);
19                i++;
20                j--;
21            }
22        }
23
24        return s;
25    }
26};