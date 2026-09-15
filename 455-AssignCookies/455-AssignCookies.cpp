// Last updated: 9/15/2026, 2:24:41 PM
1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4        int n=cardPoints.size();
5        int leftSum=0;
6        int rightSum=0;
7        int maxSum=0;
8        for(int i=0;i<=k-1;i++){
9            leftSum=leftSum+cardPoints[i];
10        }
11        maxSum = leftSum;
12        int rightInd=n-1;
13        for(int i=k-1;i>=0;i--){
14            leftSum=leftSum-cardPoints[i];
15            rightSum=rightSum+cardPoints[rightInd];
16            rightInd=rightInd-1;
17            maxSum=max(maxSum,leftSum+rightSum);
18        }
19         return maxSum;
20    }
21};