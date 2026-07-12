// Last updated: 7/13/2026, 12:18:40 AM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int n=nums.size();
5            int i=0;
6            for(int j=0;j<n;j++){
7                if(nums[j]!=0){
8                    swap(nums[i],nums[j]);
9                    i++;
10                }
11                
12               
13            }
14        
15    }
16};