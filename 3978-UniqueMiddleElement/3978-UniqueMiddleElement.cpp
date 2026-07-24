// Last updated: 7/24/2026, 11:46:22 PM
1class Solution {
2public:
3    bool isMiddleElementUnique(vector<int>& nums) {
4        
5        int n=nums.size();
6        if(n==1) return true;
7        int target=nums[(n+1)/2-1];
8        int count=0;
9        for(int i=0;i<n;i++){
10            if(target==nums[i]){
11                count++;
12            }
13        }
14        if(count>1){
15            return false;
16        }
17        else{
18            return true;
19        }
20    }
21};