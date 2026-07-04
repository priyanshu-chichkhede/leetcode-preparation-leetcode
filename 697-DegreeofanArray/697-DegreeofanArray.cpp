// Last updated: 7/4/2026, 2:53:36 PM
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int i=0;
5        int n=s.size();
6        int j=n-1;
7        while(i<j){
8            swap(s[i],s[j]);
9            i++;
10            j--;
11        }
12        
13    }
14};