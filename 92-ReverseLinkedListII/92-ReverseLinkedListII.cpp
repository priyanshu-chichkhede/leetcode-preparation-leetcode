// Last updated: 7/4/2026, 5:23:29 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        int i = 0;
5
6        while (i + 1 < s.size()) {
7            // the loop till the end is checked and then erase is done
8            // erase(i,number of character we want to delete )
9            //after deleting the 2 character next characters with number we have deleted comes
10            if (s[i] == s[i + 1]) {
11                s.erase(i, 2);
12             // what if i<0 then it would be a runtime error to prevent that we keep i positive and if it is greater than 0 then we delete to make sure to check the previous number as well;  
13                if (i > 0) {
14                    i--;
15                }
16            }
17            else {
18                i++;
19            }
20        }
21
22        return s;
23    }
24};