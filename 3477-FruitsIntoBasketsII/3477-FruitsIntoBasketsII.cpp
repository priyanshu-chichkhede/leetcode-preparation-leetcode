// Last updated: 9/22/2026, 1:21:29 PM
1class Solution {
2public:
3    int maxAscendingSum(vector<int>& nums) {
4        int n=nums.size();
5        int sum=nums[0];
6        int maxSum=nums[0];
7        for(int i=1;i<n;i++){
8            if(nums[i]>nums[i-1]){
9                sum+=nums[i];
10            }
11            else{
12                sum=nums[i];
13            }
14            maxSum=max(maxSum,sum);
15        }
16     
17        return maxSum;
18    }
19};