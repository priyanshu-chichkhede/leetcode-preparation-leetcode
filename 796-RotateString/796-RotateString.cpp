// Last updated: 7/23/2026, 1:42:51 AM
1class Solution {
2public:
3    int secondHighest(string s) {
4        int n=s.length();
5        vector<int> ans;
6        for(int i=0;i<n;i++){
7           if(s[i]>='0' and s[i]<='9'  ){
8            int num=s[i]-'0';
9            ans.push_back(num);
10           } 
11
12        }
13        sort(ans.begin(),ans.end());
14    for (int i = ans.size() - 2; i >= 0; i--) {
15            if (ans[i] != ans.back()) {
16                return ans[i];
17            }
18        }
19
20        return -1;
21    }
22};