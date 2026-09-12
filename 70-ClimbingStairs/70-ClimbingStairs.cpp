// Last updated: 9/12/2026, 11:08:38 PM
1class Solution {
2public:
3    // int helper(int n, vector<int>& ans) {
4    //     if (n <= 2) {
5    //         return n;
6    //     }
7
8    //     if (ans[n] != -1) {
9    //         return ans[n];
10    //     }
11
12    //     ans[n] = helper(n-1, ans) + helper(n-2, ans);
13
14    //     return ans[n];
15    // }
16
17    int climbStairs(int n) {
18        if(n<=2){
19            return n;
20        }//edge case where the vector is of size 2 or
21        //something
22        vector<int> ans(n+1);
23        ans[1]=1;
24        ans[2]=2;
25        for(int i=3;i<ans.size();i++){
26            ans[i]=ans[i-1]+ans[i-2];
27        }
28        return ans[n];
29    }
30};