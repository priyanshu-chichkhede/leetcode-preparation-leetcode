// Last updated: 7/4/2026, 4:36:29 PM
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int i=0;
5        int n=s.length();
6        int j=n-1;
7        while(i<j){
8            if(!isalnum(s[i])){
9                i++;
10                continue; //to discard all the next part of the loop and again come to this loop
11            }
12               if(!isalnum(s[j])){
13                j--;
14                continue;
15            }
16            if(tolower(s[i])!=tolower(s[j])){
17                return false;
18            }
19            else{
20                i++;
21                j--;
22            }
23        }
24        return true;
25    }
26};