// Last updated: 7/12/2026, 11:28:04 PM
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        string str=to_string(x);
5        int i=0;
6        int j=str.length()-1;
7        while(i<j){
8            if(str[i]==str[j]){
9            i++;
10            j--;
11            
12        }
13        else{
14            return false;
15        }}
16        return true;
17    }
18};