// Last updated: 7/4/2026, 10:16:54 PM
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4        int freq[26] = {0};
5
6        for (int i = 0; i < s1.length(); i++) {
7            freq[s1[i] - 'a']++;
8        }
9
10        int windSize = s1.length();
11
12        for (int i = 0; i + windSize <= s2.length(); i++) {
13            int windFreq[26] = {0};
14
15            for (int j = i; j < i + windSize; j++) {
16                windFreq[s2[j] - 'a']++;
17            }
18
19            bool same = true;
20
21            for (int j = 0; j < 26; j++) {
22                if (freq[j] != windFreq[j]) {
23                    same = false;
24                    break;
25                }
26            }
27
28            if (same) {
29                return true;
30            }
31        }
32
33        return false;
34    }
35};