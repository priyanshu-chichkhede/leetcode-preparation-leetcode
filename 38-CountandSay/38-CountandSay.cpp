// Last updated: 7/23/2026, 12:36:08 AM
1class Solution {
2public:
3    string helper(string s, int i, int n){
4      if(i==n){
5        return s;
6      }
7      string ss = "";
8      int x=0;
9      int m = s.length();
10      for(int i=0; i<m; i++){
11         if(i!= m-1 and s[i]==s[i+1]){
12            x+=1;
13         }
14         else{
15            x+=1;
16            char c = x + '0';
17            char d = s[i] ;
18            ss+=c;
19            ss+=d;
20            x=0;
21         }
22      }
23      return helper(ss,i+1,n);
24    }
25    string countAndSay(int n) {
26        if(n<2) return "1";
27        else return helper("11",2,n);
28    }
29};