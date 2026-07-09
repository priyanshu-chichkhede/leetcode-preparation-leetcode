// Last updated: 7/9/2026, 11:36:42 PM
1class Solution {
2public:
3    int smallestAbsent(vector<int>& nums) {
4        int n=nums.size();
5        int sum=0;
6        sort(nums.begin(), nums.end());
7        for(int i=0;i<n;i++){
8            sum=sum+nums[i];
9
10               }
11        int average= sum/n;
12        int smallNumber=max(1,average+1);
13        
14        for(int i=0;i<n;i++){
15            if( smallNumber==nums[i]){
16                smallNumber=smallNumber+1;
17            }
18        }
19        return smallNumber; 
20   
21    }
22};
23
24// int i=0;
25        //     for(int j=i+1;j<n;j++){
26        //         if(nums[i]<nums[j]){
27        //             i=j;
28        //         }
29        //     } for finding the maximum code
30        //     return nums[i]+1;