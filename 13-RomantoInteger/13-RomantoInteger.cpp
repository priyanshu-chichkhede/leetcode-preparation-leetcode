// Last updated: 7/14/2026, 3:14:56 AM
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        // int count[26] = {0};
5        // // we go throught the whole string with this array and we get the count as per 
6        // for(int i = 0; i < s.length(); i++) {
7        //     count[s[i] - 'a']++;
8        // }
9        // //for duplicate we get the value as 2 and unique we get the value as 1
10        // for(int i = 0; i < s.length(); i++) {
11        //     if(count[s[i] - 'a'] == 1) {
12        //         return i;
13        //     }
14        // }
15        //     //where we return the index where it was unique
16        // return -1;
17   for (int i = 0; i < s.length(); i++) {
18    int j;
19    for (j = 0; j < s.length(); j++) {
20        if (i != j && s[i] == s[j]) {
21            break;
22        }
23    }
24
25    if (j == s.length()) {
26        return i;
27    }
28}
29
30return -1;
31    }
32};