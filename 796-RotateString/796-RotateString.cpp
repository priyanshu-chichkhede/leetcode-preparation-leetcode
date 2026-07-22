// Last updated: 7/23/2026, 1:08:00 AM
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if(s.length()!=goal.length())return false;
5        string arr = s+s;
6        if(arr.find(goal)!= string::npos){
7            return true;
8        }
9        else{
10            return false;
11        }
12    }
13};