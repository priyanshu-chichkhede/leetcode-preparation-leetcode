// Last updated: 7/12/2026, 3:26:12 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        unordered_map<int,int> mpp;
5        int n=nums.size();
6        for(int i=0;i<n;i++){
7            mpp[nums[i]]++;
8        }
9        for(auto it: mpp){
10            if(it.second>1){
11                return it.first;
12            }
13        }
14        return 1;
15
16    }
17};