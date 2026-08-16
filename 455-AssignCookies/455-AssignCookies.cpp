// Last updated: 8/16/2026, 8:16:33 PM
1class Solution {
2public:
3    int findContentChildren(vector<int>& g, vector<int>& s) {
4        int m=g.size();
5        int n=s.size();
6        sort(g.begin(),g.end());
7        sort(s.begin(),s.end());
8        int i=0;
9        int j=0;
10        int count=0;
11        while(j<n and i<m){
12            if(g[i]<=s[j]){
13                count++;
14                i++;
15            }
16            j++;
17        }
18        return count;
19    }
20};