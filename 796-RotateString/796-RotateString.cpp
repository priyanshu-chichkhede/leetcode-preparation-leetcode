// Last updated: 7/23/2026, 2:03:10 AM
1class Solution {
2public:
3    int diagonalSum(vector<vector<int>>& mat) {
4        int n=mat.size();
5        int sum=0;
6        for(int i=0;i<n;i++){
7            for(int j=0;j<n;j++){
8                if(i==j){
9                    sum=sum+mat[i][j];
10                }
11                else if(i+j==n-1){
12                    sum+=mat[i][j];
13                }
14
15                
16            }
17        }
18        return sum;
19    }
20};