// Last updated: 7/13/2026, 12:49:18 AM
1class Solution {
2public:
3    vector<int> concatWithReverse(vector<int>& nums) {
4        vector <int> nums2;
5        for(int i=0;i<nums.size();i++){
6         nums2.push_back(nums[i]);
7        }
8        int j=0;
9        int k=nums2.size()-1;
10        while(j<k){
11           swap(nums2[k],nums2[j]); 
12           j++;
13           k--;
14        }
15        vector<int> ans;
16        for(int i=0;i<nums.size();i++){
17            ans.push_back(nums[i]);
18        }
19        for(int i=0;i<nums2.size();i++){
20            ans.push_back(nums2[i]);
21        }
22        return ans;
23    }
24};