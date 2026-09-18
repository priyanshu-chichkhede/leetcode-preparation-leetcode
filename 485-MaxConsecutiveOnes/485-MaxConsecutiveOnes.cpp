// Last updated: 9/18/2026, 10:49:40 PM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int n=nums.size();
5       int i=0;
6       int count=0;
7       int maxSum=0;
8       while(i<n){
9        if(nums[i]==1){
10            count++;
11        }
12        if(nums[i]!=1){
13            maxSum=max(maxSum,count);
14            count=0;
15        }
16        i++;
17        
18       }
19       return max(count,maxSum);
20    }
21};